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