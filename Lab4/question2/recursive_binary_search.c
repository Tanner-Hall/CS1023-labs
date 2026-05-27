#include <stdio.h>

int recursiveBinarySearch(const int a[], int left, int right, int key);

int main(void) {
    int array[] = {2, 5, 8, 12, 16, 23, 38, 45, 67, 91};
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Enter a search key: ");
    scanf("%d", &key);

    int result = recursiveBinarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("Value %d found at index %d.\n", key, result);
    } else {
        printf("Value %d was not found in the array.\n", key);
    }

    return 0;
}
int recursiveBinarySearch(const int a[], int left, int right, int key) {
    if (left > right) {
        return -1;
    }

    int mid = (left + right) / 2;

    if (key == a[mid]) {
        return mid;       
    } else if (key < a[mid]) {
        return recursiveBinarySearch(a, left, mid - 1, key);  
    } else {
        return recursiveBinarySearch(a, mid + 1, right, key); 
    }
}