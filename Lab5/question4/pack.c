#include <stdio.h>
#include <limits.h>
void packing(const char array[]);

int main(void){
char a[4]= {};
unsigned int x =0;
int mask =1;
printf("an unsigned integer is %zu bits\n", CHAR_BIT * sizeof(x));
for (int i =0; i <= 4; i++){
printf("enter character number %d\n", i);
scanf("%s", &a[i]);
printf("character %d is %d\n", i, a[i]);
printf("the 8 bit representation of the character is:");
for(int c =7; c >=0; c--){
putchar((a[i] & (mask << c)) ? '1' : '0');
}
}
}
void packing(const char array[]){



}