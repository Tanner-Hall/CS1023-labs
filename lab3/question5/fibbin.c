#include<stdio.h>

unsigned long long int fib(int num);
int main(void){
int n=0;
puts("I will calculate the fibinacci sequence up to for the entered value:");
scanf("%d", &n);
printf("the corresponding fibinacci number for %d is %llu",n, fib(n));
}
unsigned long long int fib(int num){
if (num<=1){
    return num;
}
else{
    return fib(num-1)+fib(num-2);
}
}
/*Main is used to print the final output and initiate the variable.
This variable is then passed on to the function fib which is a reocuring funcion that calls on itslef.
It uss the mathmatical relaion to calculate the fibinacci value for the input.*/