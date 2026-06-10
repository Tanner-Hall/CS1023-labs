#include <stdio.h>

void building(void);

void car(void);

void bike(void);

int main(void) {
    int x = 0;
    if (x == 1 || x == 2 || x == 3)
{
    void (*operations[3])(void) = {building, car, bike};
    puts("enter 1 for emisssion of a building\n enter 2 for emisssion of a car\n enter 3 for emisssion of a bike\n");
    scanf("%d", &x);
    operations[x];
}
else{
    printf("that is an incorrect value plase enter a valid input");
    scanf("%d", &x);
}
}
void building(void){
puts("enter the amount of energy ")


}