#include <stdio.h>

/*
 * Note on data type:
 * We use 'long long' for savings. Fibonacci numbers grow
 * very fast, and a standard 'int' would overflow (stop
 * being correct) after only 47 months. 'long long'
 * gives us much more room.
 */

// --- Function Prototypes ---

/**
 * @brief (Recursive) Calculates the savings for the N-th month.
 * This function directly implements the recursive logic as requested
 * by the "Key Skill" and "Supplementary Problem 3".
 *
 * @param n The month number to calculate.
 * @param m1 The custom savings amount for Month 1 (base case).
 * @param m2 The custom savings amount for Month 2 (base case).
 * @return The savings amount for month 'n'.
 */
long long recursiveNthMonthSaving(int n, long long m1, long long m2);

/**
 * @brief (Iterative) Displays the full savings plan and total.
 * This function uses an efficient loop (iteration) to generate
 * the series, fulfilling Key Question 2, 4, and Supp. Problem 2.
 *
 * @param n The total number of months.
 * @param m1 The custom savings amount for Month 1.
 * @param m2 The custom savings amount for Month 2.
 */
void displaySavingsPlan(int n, long long m1, long long m2);

// --- Main Program ---

int main() {
    int n;
    long long month1, month2;

    printf("--- Financial Advisor Savings Planner ---\n");

    // Supplementary Problem 1: Let users define custom values
    printf("Enter savings for Month 1 (e.g., 100): ₹");
    scanf("%lld", &month1);
    printf("Enter savings for Month 2 (e.g., 200): ₹");
    scanf("%lld", &month2);

    // Loop to get and validate 'n' (Key Question 1)
    while (1) {
        printf("\nEnter total number of months to plan (n): ");
        if (scanf("%d", &n) == 1 && n >= 1) {
            break; // Valid input
        } else {
            printf("Invalid input. 'n' must be 1 or greater.\n");
            // Clear the input buffer in case of non-numeric input
            while (getchar() != '\n');
        }
    }

    // --- 1. Display the Iterative Plan (Practical Tool) ---
    // This function handles the main logic
    displaySavingsPlan(n, month1, month2);

    // --- 2. Demonstrate Recursive Calculation (Key Skill) ---
    printf("\n--- Recursive Calculation (for comparison) ---\n");
    // Call the recursive function just to find the final month's value
    long long nthValue = recursiveNthMonthSaving(n, month1, month2);
    printf("Recursion shows savings *for* Month %d will be: ₹%lld\n", n, nthValue);
    
    if (n > 30) {
        printf("(Notice: This recursive calculation can be very slow for large 'n'!) \n");
    }

    return 0;
}

// --- Function Definitions ---

/**
 * @brief (Iterative) Displays the full savings plan and total.
 */
void displaySavingsPlan(int n, long long m1, long long m2) {
    long long prevTwo = m1;     // Stores n-2 value
    long long prevOne = m2;     // Stores n-1 value
    long long current = 0;      // Stores current n value
    long long totalSavings = 0; // Supplementary Problem 2: Total

    printf("\n--- Your %d-Month Savings Growth Plan ---\n", n);

    // Key Question 4: Clear, month-wise labeling
    // Handle the base case for n=1
    printf("Month 1: ₹%lld\n", m1);
    totalSavings = m1;

    // Handle the base case for n=2
    if (n >= 2) {
        printf("Month 2: ₹%lld\n", m2);
        totalSavings += m2;
    }

    // Key Question 2: Fibonacci logic implemented accurately (using a loop)
    // Loop for all remaining months from 3 up to n
    for (int i = 3; i <= n; i++) {
        current = prevOne + prevTwo;
        printf("Month %d: ₹%lld\n", i, current);
        
        // Add to total
        totalSavings += current;
        
        // Shift values for the next iteration
        prevTwo = prevOne;
        prevOne = current;
    }

    // Supplementary Problem 2: Display the total
    printf("-------------------------------------------\n");
    printf("Total Saved after %d months: ₹%lld\n", n, totalSavings);
}

/**
 * @brief (Recursive) Calculates the savings for the N-th month.
 */
long long recursiveNthMonthSaving(int n, long long m1, long long m2) {
    // Base Case 1: Corresponds to user's first month (Supp. Problem 1)
    if (n == 1) {
        return m1;
    }
    // Base Case 2: Corresponds to user's second month
    if (n == 2) {
        return m2;
    }
    
    // Recursive Step: Sum of the two preceding months
    return recursiveNthMonthSaving(n - 1, m1, m2) + recursiveNthMonthSaving(n - 2, m1, m2);
}