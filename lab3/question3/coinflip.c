#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int flip(void);

int main(void){
    srand(time(NULL));
    int neg_count =0;
    int pos_count =0;
    int result =0;
    for (int i =0; i < 100; i++){
    result = flip();
    if (result == 1){
        pos_count++;}
    else if (result == 0){
        neg_count++;}
    }
printf("coin landed on heads %d times \n", pos_count);
printf("coin landed on tails %d\n times \n", neg_count);
}

int flip(void){
    int ans = 0;
    ans = (rand() % 2);
    return ans;
}