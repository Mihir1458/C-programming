#include <stdio.h>
#include <string.h>

// Function to calculate final amount
float calculateFinalAmount(float amount, long long int isMember, char promoCode[]) {
    float discount = 0.0;

    // Tiered discount
    if (amount >= 1000 && amount <= 5000) {
        discount = 0.10 * amount;
    } else if (amount > 5000) {
        discount = 0.20 * amount;
    }

    float afterDiscount = amount - discount;

    // Extra 5% discount for members
    if (isMember == 1) {
        float memberDiscount = 0.05 * afterDiscount;
        discount += memberDiscount;
        afterDiscount -= memberDiscount;
    }

    // Promo code discount (if correct)
    if (strcmp(promoCode, "SAVE10") == 0) {
        float promoDiscount = 0.20 * afterDiscount;
        discount += promoDiscount;
        afterDiscount -= promoDiscount;
    }

    // 5% GST
    float gst = 0.05 * afterDiscount;
    float finalAmount = afterDiscount + gst;

    // Display details
    printf("\n--- BILL DETAILS ---\n");
    printf("Original Amount   : ₹%.2f\n", amount);
    printf("Total Discount    : ₹%.2f\n", discount);
    printf("Amount After Discount : ₹%.2f\n", afterDiscount);
    printf("GST (5%%)          : ₹%.2f\n", gst);
    printf("Final Amount to Pay : ₹%.2f\n", finalAmount);
    printf("----------------------\n\n");

    return finalAmount;
}

int main() {
    int customerCount, isMember;
    float amount;
    char promoCode[20];

    printf("Enter number of customers to process: ");
    scanf("%d", &customerCount);

    for (int i = 1; i <= customerCount; i++) {
        printf("\n--- Customer %d ---\n", i);

        printf("Enter total shopping amount (₹): ");
        scanf("%f", &amount);

        printf("Is the customer a registered member? (Entre number , 0 for No): ");
        scanf("%d", &isMember);

        printf("Enter Promo Code (if any, or type 'NONE'): ");
        scanf("%s", promoCode);

        calculateFinalAmount(amount, isMember, promoCode);
    }

    printf("All bills processed. Thank you!\n");

    return 0;
}
