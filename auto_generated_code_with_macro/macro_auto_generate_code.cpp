//
// Created by 唐云 on 2021/3/16.
//

#include "macro_auto_generate_code.h"

using namespace std;

DEF_CLASS(MyClass)
(
        CHK_FIELD(getValue())
        CHK_FIELD(getValue())
        CHK_FIELD(getValue())
);


#define PI 3.14
#define MUL_PI(n) n * PI
#define TWO 2




#define PARAM( n ) ,typename P##n
#define PARAM_END typename P

#define ARG( n ) ,P##n
#define ARG_END P

#define PARAM_1( n ) CHR( typename P, n )
#define PARAM_2( n ) CHR( CHR( PARAM_, DEC( n ) )( DEC( n ) ), TYPE( n ) )
#define PARAM_3( n ) CHR( CHR( PARAM_, DEC( n ) )( DEC( n ) ), TYPE( n ) )

#define REPEAT_1( n, f, e ) CHR( e, n )
#define REPEAT_2( n, f, e ) CHR( CHR( REPEAT_, DEC( n ) )( DEC( n ), f, e ), f( n ) )
#define REPEAT_3( n, f, e ) CHR( CHR( REPEAT_, DEC( n ) )( DEC( n ), f, e ), f( n ) )

#define DEF_PARAM( n ) REPEAT_##n( n, PARAM, PARAM_END )
#define DEF_ARG( n ) REPEAT_##n( n, ARG, ARG_END )



#define TO_STRING(x) TO_STRING1( x )
#define TO_STRING1(x) #x


int getValue(){
    return 1;
}

//int main() {
////    std::map<string, int > map;
////    MyClass myClass(map);
////    myClass.show(123);
//
//    auto result = TO_STRING(MUL_PI(TWO));
//    cout << "result = " << result << endl;
//
//    cout << "MUL_PI(TWO) = " << MUL_PI(TWO) << endl;
//
//    return 0;
//}