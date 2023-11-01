#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables for the formulary values
    double mass, height, gravitational_constant, potential_energy;

    // Prompt the user to enter mass, height, and gravitational constant
    printf("Enter the mass (in kg): ");
    scanf("%lf", &mass);

    printf("Enter the height (in meters): ");
    scanf("%lf", &height);

    printf("Enter the gravitational constant (9.81 m/s^2 on Earth): ");
    scanf("%lf", &gravitational_constant);

    // Calculate the potential energy using the formula: potential_energy = mass * gravity * height
    potential_energy = mass * gravitational_constant * height;

    // Display the result with two decimal places
    printf("The potential energy is: %.2lf Joules\n", potential_energy);

    return 0;
}