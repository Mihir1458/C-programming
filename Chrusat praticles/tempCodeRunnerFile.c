#include <stdio.h>
#include <math.h> // Required for sqrt()

/*
 * C does not support true nested functions.
 * We use 'static' functions to limit their scope to this file,
 * achieving a similar encapsulation goal.
 */

/**
 * @brief Key Question 2 & Supp. Problem 2: Validates the triangle.
 * Checks for positive sides and the triangle inequality theorem.
 * @return 1 if valid, 0 if invalid.
 */
static int is_valid(double a, double b, double c) {
    // Supplementary Problem 2: Reject negative or zero values
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Validation: Error: All side lengths must be positive numbers.\n");
        return 0; // 0 represents false
    }
    
    // Key Question 2: Triangle Inequality Theorem
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Validation: The sides form a valid triangle.\n");
        return 1; // 1 represents true
    } else {
        printf("Validation: Error: The given sides do not form a valid triangle.\n");
        return 0; // 0 represents false
    }
}

/**
 * @brief Supplementary Problem 4 / Key Skill: Calculates the perimeter.
 */
static double get_perimeter(double a, double b, double c) {
    return a + b + c;
}

/**
 * @brief Key Question 3: Calculates the area using Heron's Formula.
 * This function should only be called after validation.
 */
static double get_area(double a, double b, double c) {
    double s = get_perimeter(a, b, c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

/**
 * @brief Supplementary Problem 1: Classifies the triangle.
 */
static void get_classification(double a, double b, double c) {
    if (a == b && b == c) {
        printf("Type:         Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Type:         Isosceles\n");
    } else {
        printf("Type:         Scalene\n");
    }
}

/**
 * @brief Main function to run the architect's assistant.
 * Handles input, calls helpers, and loops for multiple triangles.
 */
int main() {
    double side1, side2, side3;
    int inputStatus;

    printf("Welcome to the Triangular Garden Architect Assistant (C Version)!\n");
    
    // Supplementary Problem 3: Loop for multiple triangles
    while (1) { // Infinite loop
        printf("\nEnter '0' for any side to exit.\n");
        
        // Key Question 1: Accepting floating-point values
        printf("Enter length of side 1: ");
        inputStatus = scanf("%lf", &side1);
        if (inputStatus != 1) {
            printf("\nError: Invalid input. Please enter numerical values only.\n");
            while (getchar() != '\n'); // Clear the invalid input buffer
            continue; // Skip to the next loop iteration
        }

        printf("Enter length of side 2: ");
        inputStatus = scanf("%lf", &side2);
        if (inputStatus != 1) {
            printf("\nError: Invalid input. Please enter numerical values only.\n");
            while (getchar() != '\n');
            continue;
        }

        printf("Enter length of side 3: ");
        inputStatus = scanf("%lf", &side3);
         if (inputStatus != 1) {
            printf("\nError: Invalid input. Please enter numerical values only.\n");
            while (getchar() != '\n');
            continue;
        }

        // Check for exit condition
        if (side1 == 0 || side2 == 0 || side3 == 0) {
            break; // Exit the while loop
        }
        
        printf("----------------------------------------\n");
        printf("Analyzing sides: %.2f, %.2f, %.2f\n", side1, side2, side3);

        // 1. Validate the triangle
        // Key Question 3: Calculations run only after validation
        if (is_valid(side1, side2, side3)) {
            
            // 2. Calculate and display classification
            get_classification(side1, side2, side3);
            
            // 3. Calculate and display perimeter
            double perimeter = get_perimeter(side1, side2, side3);
            printf("Perimeter:    %.2f units\n", perimeter);
            
            // 4. Calculate and display area
            double area = get_area(side1, side2, side3);
            // Key Question 5: Clear and informative output
            printf("Area:         %.2f square units (for turf/plants)\n", area);
        }
        printf("----------------------------------------\n");
    }

    printf("\nThank you for using the Architect Assistant. Goodbye!\n");
    return 0;
}