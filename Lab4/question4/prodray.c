#include <stdio.h>
#define big 5
void prodofarray(const int nums[], int newarray[], int index, int left_product);
int main(void){
int num[big] = {1, 2, 3, 4, 5};
int newarray[big] = {0};
prodofarray(num, newarray, 0, 1);
for(size_t i = 0; i < big; i++){
            printf("%d ", newarray[i]);
}
}
void prodofarray(const int nums[], int newarray[], int index, int left_product) {
    if (index == big) {
        return;
    }

    int current_element = nums[index];

    newarray[index] = left_product;

    prodofarray(nums, newarray, index + 1, left_product * current_element);

    static int right_product = 1; 
    newarray[index] *= right_product;
    right_product *= current_element;
}