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
