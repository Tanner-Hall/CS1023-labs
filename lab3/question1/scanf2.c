#include <stdio.h>

int main(void){
    int grade =0;
    int read =0;
    int result =0;
    for(int i = 0; i < 2; i++)
    {
         puts("enter an integer grade");
        result = scanf("%d", &grade);
        if (result ==1){
            read++;
        }
        else {
            while (getchar() != '\n');
        }
    }
    if (read == 0) {
        puts("No Values Were read");
    }
    if (read == 1) {
        puts("One Value Was read");
    }
    if (read == 2) {
        puts("Both Values Were read");
    }
}
/* a while loop that asks the user to input two integers.
It the scanf sunction checks to see if an integer was entered for each input.
result is a placeholder variable that checks if scanf returns a 1.
If it did return a 1 than read is incremneted by 1.
The value if read is the value of inputs that were read properly and therefor must be integers.
A message is printed depending on the value of read.*/