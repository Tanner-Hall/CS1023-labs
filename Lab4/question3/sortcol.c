#include <stdio.h>
#define size 7
void sort(int a[], int n);
int main(void){
int b = size; 
int array[size]= {2,0,1,1,2,0,0};
printf("initial array is ");
for (size_t i =0; i < size; i++ ){
    printf(" %d", array[i]);
}
sort(array, b);
}
void sort(int a[], int n){
if (n -1 == 0){
    printf("sorted array is ");
    for (size_t i =0; i < size; i++ ){
    printf(" %d", a[i]);
}
}
    for (size_t i =1; i <= n; i++ )
    if (a[i] < a[i-1]){
        int temp = a[i-1];
        a[i-1] = a[i];
        a[i]= temp;
    }
sort(a, n-1);

}