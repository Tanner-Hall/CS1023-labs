#include <stdio.h>
#define SIZE 5

int recursiveMax(const int a[], int n);

int main(void) {
    int array[SIZE] = {4, 7, 9, 6, 2};

    printf("the maximum of the array is %d\n", recursiveMax(array, SIZE - 1));

    return 0;
}

int recursiveMax(const int a[], int n) {
    if (n == 0) {
        return a[0];
    }

    int maxOfRest = recursiveMax(a, n - 1);

    return (a[n] > maxOfRest) ? a[n] : maxOfRest;
}