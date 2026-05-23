#include <stdio.h>

unsigned long long int fibonacci(int n);

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Fibonacci(%d) = %llu\n", n, fibonacci(n));
    return 0;
}

unsigned long long int fibonacci(int n) {
    if (n <= 1)
        return n;

    unsigned long long int prev = 0;
    unsigned long long int curr = 1;

    for (int i = 2; i <= n; i++) {
        unsigned long long int next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}
/*Main is used to print the final output and initiate the variable.
This variable is then passed on to the function fibonacci which has 2 varables that define the previous and current values.
fibonacci is comprised of a for loop that adds he current value and previous value for each iteration until the loop reaches the input.*/
