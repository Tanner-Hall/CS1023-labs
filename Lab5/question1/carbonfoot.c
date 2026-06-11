#include <stdio.h>

// Function prototypes
void building(void);
void car(void);
void bike(void);

int main(void) {
    void (*operations[3])(void) = {building, car, bike};
    int x = 0;

    do {
        printf("=== CARBON FOOTPRINT CALCULATOR ===\n");
        printf("Enter 1 for emissions of a building\n");
        printf("Enter 2 for emissions of a car\n");
        printf("Enter 3 for emissions of a bike\n");
        printf("Choice: ");
        
        scanf("%d", &x);

        if (x == 1 || x == 2 || x == 3) {
            // Call the function. We do 'x - 1' because menu choice 1 is array index 0.
            operations[x - 1](); 
        } else {
            printf("\n[Error] That is an incorrect value. Please enter a valid input.\n");
            printf("--------------------------------------------------\n\n");
        }
    } while (x < 1 || x > 3); // Repeat if the input is out of bounds

}

