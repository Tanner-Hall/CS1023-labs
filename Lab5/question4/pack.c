#include <stdio.h>
#include <limits.h>
unsigned int packCharacters(const char array[]);
void printBinary(unsigned int value, int bits);

int main(void){
char a[4]= {};
unsigned int x =0;
int mask =1;
printf("an unsigned integer is %zu bits\n", CHAR_BIT * sizeof(x));
for (int i =1; i <= 4; i++){
printf("enter character number %d\n", i);
scanf(" %c", &a[i]);
printf("character %d is %c\n", i, a[i]);
printf("the 8 bit representation of the character is: \n");
for(int c =7; c >=0; c--){
putchar((a[i] & (mask << c)) ? '1' : '0');
}
printf("\n");
}
printf("Packed result in decimal: %u\n", packCharacters(a));
printf("Packed result in HEX: 0x%08X\n", packCharacters(a));
printf("Packed result in binary:    ");
printBinary(packCharacters(a), 32);
}
unsigned int packCharacters(const char array[]) {
    unsigned int packed = 0;

    for (int i = 0; i < 4; i++) {
        packed = (packed << 8) | (unsigned char)array[i];
    }

    return packed;
}
void printBinary(unsigned int value, int bits) {
    unsigned int mask = 1 << (bits - 1);
    for (int i = 0; i < bits; i++) {
        putchar((value & mask) ? '1' : '0');
        value <<= 1;
        if ((i + 1) % 8 == 0 && (i + 1) < bits) {
            putchar(' ');
        }
    }
}

/*The code starts with 2 functions being defined, the first used to calculate packd integer.
The second function helps with printing the binary of the packed integer.
The main starts by checking the size of an unsigned integer being 32 bits.
A 4 element character rray is created and then filled by the users prompts.
It then shows the 8 bit representation of each user input.
This array is passed onto the function tha packs them by taking theor 8 bit representation and shifting 
it right 8 times until all 32 bits of the integer is the numbers of the characters.*/