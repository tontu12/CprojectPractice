#include <stdio.h>

int main(){
    int i = 9.99;       // 符号あり8ビット整数(-128～127)
    short j = 9.99;     // 符号あり16ビット整数(-32768～32767)
    long l = 9.99;      // 符号あり32ビット整数(-2147483648～2147483647)
    long long n = 9.99; // 符号あり64ビット整数(-9223372036854775808～9223372036854775807)

    signed char m = 9.99;   // 符号あり8ビット整数(-128～127)
    unsigned char k = 9.99; // 符号なし8ビット整数(0～255)

    float f = 9.99;     // 符号あり32ビット浮動小数点数
    double d = 9.99;    // 符号あり64ビット浮動小数点数

    typedef int myint; // 型エイリアスの定義

    printf("int i: %4d\n", i);
    printf("float f: %9f\n", f);
    printf("double d: %5f\n", d);
    printf("short j: %4d\n", j);
    printf("long l: %4d\n", l);
    printf("long long n: %4d\n", n);

    // printf("char m: %c", m)
}