#include <stdio.h>

int main(void) 
{
int base =0;
int number =0;
double answer =0;
puts("what number is your base?");
scanf("%d", &base);
puts("what number is your argument?");
scanf("%d", &number);
int mult = base;
while (mult <= number) {
    answer += 1;
    mult *= base;
}
printf("so log base %d of %d is %.2f", base, number, answer);
}