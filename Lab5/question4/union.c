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

    u1.f = temp_f;
    u2.d = temp_d;
    u3.x = temp_x;

    printf("--- Union 1 (Stored as float '%f') ---\n", temp_f);
    printf("As float:       %f\n", u1.f);
    printf("As double:      %f\n", u1.d);
    printf("As long double: %Lf\n\n", u1.x);

