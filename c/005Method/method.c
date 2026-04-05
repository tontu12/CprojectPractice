#include <stdio.h>

const float pi = 3.14;

float calc_a(float r) {
    float area = pi * r * r;
    return area;
}

double avg(double m, double n){
    double r = (m + n) / 2.0;
    return r;
}

int main() {
    float radius = 5.0;
    float area = calc_a(radius);
    double d1 = 1.2, d2 = 1.3, d3 = 1.4;
    double avg1 = avg(1.2,1.3);
    
    printf("Area of circle with radius %.2f: %.2f\n", radius, area);

    printf("d1 : %f d2 : %f d3 : %f\n", d1,d2,d3);

    printf("avg1 : %lf\n", avg1);
    printf("avg2 : %lf\n", avg(d1,d2));
    printf("avg3 : %lf\n", avg(1.2,1.3));
    return 0;
}

