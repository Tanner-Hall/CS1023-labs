#include <stdio.h>

int main(void){
int mask = 1;
puts("enter a positive integer");
int x =0;
scanf("%d", &x);
printf("your number is %d\n", x);
mask <<= 31;
for(int c =1; c<=32; c++){
putchar((x & mask) ? '1' : '0');
if (c % 8 == 0){
putchar(' ');}
}
puts("\n");
int y = x >>= 4;
printf("the shifted result is %d\n", y);
for(int c =1; c<=32; c++){
putchar((y & mask) ? '1' : '0');
if (c % 8 == 0){
putchar(' ');}
}
}