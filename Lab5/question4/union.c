#include <stdio.h>

union floatingPoint {
    float f;
    double d;
    long double x;
};

int main(void) {
    union floatingPoint u1;
    union floatingPoint u2;
    union floatingPoint u3;

    float temp_f=0;
    double temp_d=0;
    long double temp_x=0;

    printf("Enter a float: ");
    scanf("%f", &temp_f);

    printf("Enter a double: ");
    scanf("%lf", &temp_d);

    printf("Enter a long double: ");
    scanf("%Lf", &temp_x);
    printf("\n--------------------------------------------------\n\n");

