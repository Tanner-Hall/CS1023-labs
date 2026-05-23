#include <stdio.h>

int main(void){
    int grade =0;
    int read =0;
    puts("enter an integer grade");
    read = scanf("%d", &grade);
    printf("%d\n", read);
    if (read > 0) {
        printf("The grade you entered was %d\n", grade);
    }
}

/* this code has a vaeriable for the user to inpur a number and a variable that checks if the scanf worked properly.
We specify the scanf to look for integers so if an integer is inputed than scanf will return a 1.
If anything but an integer is inputed than the scanf function will return a 0.
We chech to see if an integer was scaned, if it was, ten we print that integer.*/