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
/* This code sorts a functio by the size of each number in the array.
The function takes the array and the size of the array.
It then goes over each set of elements in the array and checks if the one on the left is larger than the one on the right.
If tha value is larger, it will swap the places of these 2 elements.
This functon then happens again but with one less element to consider since we know the one all he way to the right is teh largest.
This continues until the list has completely shrunk and all numbers are sorted. */