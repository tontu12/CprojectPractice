#include <stdio.h>

int main(){

    int i = 9.99;
    float f = 9.99;
    double d = 9.99;
    
    

    printf("int i * f: %4d\n", i * f);
    printf("float f / d: %9f\n", f / d);
    
    int j = 5;
    int k = 2;
    printf("int j %% k: %d\n", j % k);
    printf("double d %% f: %5f\n", d / f);
    int a = 2;
    int b = 3;
    int c = 4;
    printf("a + b * c: %d\n", a + b / c);
    printf("(a + b) * c: %d\n", (a + b) / c);
    printf("a / b: %d\n", a / b);
    // printf("double d %% f: %5f\n", d % f);

}

// double Double(){
//     int n = 9.99;
//     double x = 9.99;

//     printf("int n: %d\n", n);
//     printf("double x: %f\n", x);

// }