#include <stdio.h>

int main() {
    // Declare variables for the formulary values
    double mass, acceleration, force;

    // Prompt the user to enter mass and acceleration
    printf("Enter the mass (in kg): ");
    scanf("%lf", &mass);

    printf("Enter the acceleration (in m/s^2): ");
    scanf("%lf", &acceleration);

    // Calculate the force using the formula: force = mass * acceleration
    force = mass * acceleration;

    // Display the result with two decimal places
    printf("The force is: %.2lf N\n", force);

    return 0;
}