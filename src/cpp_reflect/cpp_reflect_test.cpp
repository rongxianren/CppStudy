//
// Created by 唐云 on 2021/3/18.
//

#include <iostream>
#include <string>
#include <map>
#include "refl.hpp"
using namespace std;

// Custom attribute to mark fields for validation
struct NonNegative : refl::attr::usage::member {};

struct Point {
  double x, y;
};

REFL_AUTO(
    type(Point),
    field(x, NonNegative()),
    field(y, NonNegative())
)

struct Circle {
  Point origin;
  double radius;
};

REFL_AUTO(
    type(Circle),
    field(origin),
    field(radius, NonNegative())
)

template<typename T>
constexpr bool checkNonNegaive(const T &obj) {
  // Get the type descriptor for T
  constexpr auto type = refl::reflect<T>();
  // Get the compile-time refl::type_list<...> of member descriptors
  constexpr auto members = get_members(type);
  // Filter out the non-readable members (not field or getters marked with the property() attribute)
  constexpr auto readableMembers = filter(members, [](auto member) { return is_readable(member); });

  auto invalidMemberCount = count_if(readableMembers, [&](auto member) {
    // Function-call syntax is a uniform way to get the value of a member (whether a field or a getter)
    auto &&value = member(obj);
    cout << "value = " << value << endl;
    // Check if the NonNegative attribute is present
    if constexpr (refl::descriptor::has_attribute<NonNegative>(member)) {
      // And if so, make the necessary checks
      return value < 0;
    }
      // Recursively check the value of the member
    else if (!checkNonNegaive(value)) {
      return true;
    }
    return false;
  });

  return invalidMemberCount == 0;
}
//
//int main() {
//  Point point;
//  point.x = 100;
//  point.y = 200;
//  cout << checkNonNegaive(point) << endl;
//  return 0;
//}