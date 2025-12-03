#include <stdio.h>

int main() {
    int units;
    float amount;

    printf("===== ELECTRICITY BILL GENERATOR =====\n");
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    // Billing Logic
    if (units <= 100)
        amount = units * 5;
    else if (units <= 200)
        amount = (100 * 5) + (units - 100) * 7;
    else if (units <= 300)
        amount = (100 * 5) + (100 * 7) + (units - 200) * 9;
    else
        amount = (100 * 5) + (100 * 7) + (100 * 9) + (units - 300) * 12;

    printf("\nTotal Units: %d\n", units);
    printf("Total Amount: ₹%.2f\n", amount);
    printf("=================================================\n");
    printf("Thank you for using the Electricity Bill System.\n");

    return 0;
}