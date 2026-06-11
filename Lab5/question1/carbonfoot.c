#include <stdio.h>

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
            operations[x - 1](); 
        } else {
            printf("\n[Error] That is an incorrect value. Please enter a valid input.\n");
            printf("--------------------------------------------------\n\n");
        }
    } while (x < 1 || x > 3);

}

void building(void) {
    double kwh;
    const double ELECTRICITY_FACTOR = 0.371; 

    printf("\n--- Building Carbon Footprint ---\n");
    printf("Scope: Indirect emissions from building electricity consumption.\n");
    printf("Enter the amount of electricity used (in kWh): ");
    scanf("%lf", &kwh);

    double footprint = kwh * ELECTRICITY_FACTOR;
    printf("Result: Estimated Building Footprint is %.2f kg CO2e\n", footprint);
    printf("Source: US EPA eGRID national average factor.\n");
}
void car(void) {
    double liters;
    const double GASOLINE_FACTOR = 2.31; 

    printf("\n--- Car Carbon Footprint ---\n");
    printf("Scope: Direct tailpipe emissions from gasoline combustion.\n");
    printf("Enter the amount of gasoline consumed (in Liters): ");
    scanf("%lf", &liters);

    double footprint = liters * GASOLINE_FACTOR;
    printf("Result: Estimated Car Footprint is %.2f kg CO2e\n", footprint);
    printf("Source: US EPA Greenhouse Gas Emissions Factors Hub.\n");
}
void bike(void) {
    double km;
    const double BICYCLE_LIFECYCLE_FACTOR = 0.021; 

    printf("\n--- Bicycle Carbon Footprint ---\n");
    printf("Scope: Lifecycle assessment (Manufacturing + Rider food calorie overhead).\n");
    printf("Enter the total distance traveled (in Kilometers): ");
    scanf("%lf", &km);

    double footprint = km * BICYCLE_LIFECYCLE_FACTOR;
    printf("Result: Estimated Bicycle Footprint is %.2f kg CO2e\n", footprint);
    printf("Source: European Cyclists' Federation (ECF) Lifecycle Study.\n");
}

/*the code starts off by defining 3 functions.
The main function then starts with an array whose elements are the funcion names.
Th rest of the main function deals with a do while loop that checks to see if a valid input is read.
Each input corelates to a differnet carbon emission caluculator (function).
The users choice decides whoch calculator is called upon.
Some very simple calculation are then carried out and the output is displayes along with the soirce of that formula.*/