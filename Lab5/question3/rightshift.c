#include <stdio.h>

int main(void){
int mask = 1;
puts("enter a positive integer");
int x =0;
scanf("%d", &x);
printf("your number is %d\n", x);
for(int c =31; c >=0; c--){
putchar((x & (mask << c)) ? '1' : '0');
if (c % 8 == 0){
putchar(' ');}
}
puts("\n");
int y = x >>= 4;
printf("the shifted result is %d\n", y);
for(int c =31; c >=0; c--){
putchar((y & (mask << c)) ? '1' : '0');
if (c % 8 == 0){
putchar(' ');}
}
}