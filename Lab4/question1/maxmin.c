#include <stdio.h>
#define size 5
int recursiveMax(const int a[],int max, int n);
int recursiveMin(const int a[],int max, int n);

int main(void){
int start=0;
int ma = size;
int mi = size;
int array[size]= {4,7,9,6,2};
printf("the maximum of the array is %d\n", recursiveMax(array, start, ma));
printf("the minimum of the array is %d\n", recursiveMin(array, start, mi));

}
int recursiveMax(const int a[], int max, int n){
    if (a[n]>a[n+1]){
        max = a[n];
    }
    if (a[n]<a[n+1]){
        max = a[n+1];
    }
    if (n == 1){
        if (max < a[size]){
             max = a[size];
        return max;}
    }
    return (recursiveMax(a, max, n+1));
    }

int recursiveMin(const int a[], int min, int n){
    if (a[n]>a[n+1]){
        min = a[n+1];}
    if (a[n]<a[n+1]){
        min = a[n];
    }
    if (n == size -1){
        if (min > a[size]){
             min = a[size];
        return min;}
    }
    return (recursiveMin(a, min, n+1));
    }