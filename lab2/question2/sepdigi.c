#include <stdio.h>

int main()
{
int number;
int digit1 =0;
int digit2 =0;
int digit3 =0;
int digit4 =0;
int digit5 =0;
printf("enter a five digit number \n");
scanf("%d", &number);
digit1 = number / 10000;
digit2 = number / 1000 % 10;
digit3 = number / 100 % 10;
digit4 = number / 10 % 10;
digit5 = number % 10;
printf("%d\t",digit1);
printf("%d\t",digit2);
printf("%d\t",digit3);
printf("%d\t",digit4);
printf("%d\t",digit5);
}


/* I started by initiating all of my variables. 
I then prompted 
the user to input the five digit number and took the input as the 
value for the variable "number."
We get digit1 from dividing the number
until all of the numbers are decimals except for the first.
We do the same for digit 2 but we leave two values, we then do %10 do get the second number of the two whole values.
W repeat this process until we get all the numbers.
Finally we print all of the digits with an indent between them*/