#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables for the formulary values
    double mass, velocity, kinetic_energy;

    // Prompt the user to enter mass and velocity
    printf("Enter the mass (in kg): ");
    scanf("%lf", &mass);

    printf("Enter the velocity (in m/s): ");
    scanf("%lf", &velocity);

    // Calculate the kinetic energy using the formula: kinetic_energy = 0.5 * mass * velocity^2
    kinetic_energy = 0.5 * mass * pow(velocity, 2);

    // Display the result with two decimal places
    printf("The kinetic energy is: %.2lf Joules\n", kinetic_energy);

    return 0;
}