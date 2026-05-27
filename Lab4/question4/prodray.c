#include <stdio.h>
#define big 5
void prodofarray(const int nums[], int size);
int n =big; 
int main(void){
int num[big] ={1,2,3,4,5};

prodofarray(num, n);
}
void prodofarray(const int nums[], int size){
    int newarray[big] = {0};
    if (size == 0){
        for (size_t i = 0; i < big; i++){
        printf("the new array is %d ",newarray[i]);}
    printf("\n");
        }
    int left_running_product = 1;
    for (int i = 0; i < size; i++) {
        newarray[i] = left_running_product;
        left_running_product *= nums[i];
    }
    int right_running_product = 1;
    for (int i = size - 1; i >= 0; i--) {
        newarray[i] *= right_running_product;
        right_running_product *= nums[i];
}
prodofarray(nums, size-1);
}
