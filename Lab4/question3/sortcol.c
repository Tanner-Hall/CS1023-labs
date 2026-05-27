#include <stdio.h>
#define size 7
void sort(const int a[], int n);
int main(void){
int b = size; 
int array[size]= {2,0,1,1,2,0,0};
printf("initial array is ");
for (size_t i =0; i < size; i++ ){
    printf(" %d", array[i]);
}
sort(array, b);
}
void sort(const int a[], int n){
if (n -1 == 0){
    printf("sorted array is ");
    for (size_t i =0; i < size; i++ ){
    printf(" %d", a[i]);
}
}
    if (a[n] < a[n-1]){
        int temp = a[n-1];
        a[n-1] = a[n];
        a[n] = temp;
    }


}