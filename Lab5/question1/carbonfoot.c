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