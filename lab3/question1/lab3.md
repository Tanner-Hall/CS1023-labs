```c
#include <stdio.h>

int main(void){
    int grade =0;
    int read =0;
    puts("enter an integer grade");
    read = scanf("%d\n", &grade);
    printf("%d\n", read);
    if (read >0) {
        printf("The grade you entered was %d\n", grade);
    }
}
```