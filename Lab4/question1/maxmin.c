#include <stdio.h>
#define SIZE 5

int recursiveMax(const int a[], int n);
int recursiveMin(const int a[], int n);

int main(void) {
    int array[SIZE] = {4, 7, 9, 6, 2};

    printf("the maximum of the array is %d\n", recursiveMax(array, SIZE - 1));
    printf("the minimum of the array is %d\n", recursiveMin(array, SIZE - 1));

    return 0;
}

int recursiveMax(const int a[], int n) {
    if (n == 0) {
        return a[0];
    }

    int maxOfRest = recursiveMax(a, n - 1);

    return (a[n] > maxOfRest) ? a[n] : maxOfRest;
}

int recursiveMin(const int a[], int n) {
    if (n == 0) {
        return a[0];
    }

    int minOfRest = recursiveMin(a, n - 1);
    
    return (a[n] < minOfRest) ? a[n] : minOfRest;
}