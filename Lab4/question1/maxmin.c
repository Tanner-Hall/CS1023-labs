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

    if (a[n] > maxOfRest) {
        return a[n];
}   else {
        return maxOfRest;
}
}

int recursiveMin(const int a[], int n) {
    if (n == 0) {
        return a[0];
    }

    int minOfRest = recursiveMin(a, n - 1);
    
    if (a[n] < minOfRest) {
        return a[n];
}   else {
        return minOfRest;
}
}

/* this code calls upon two recursive functions that take an array and its length minus 1 as inputs.
Both recursive functions have the base case that if there is only one elemen in the array, then it is the largest and smallest.
If this is the case, the function should just return taht number.
If this is not the case, we take one number and compare it to the rest of the list and then shrink the list by one. 
This recursion continues until he list/array is only one element.
In that case we do the last comparison and output the max or min value.*/