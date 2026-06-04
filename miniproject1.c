#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0; // initial balance
    float amount;

    while (1) {
        printf("\n===== Welcome to the ATM =====\n");
        printf("1. View Balance\n");
        printf("2. Add Funds\n");
        printf("3. Withdraw Funds\n");
        printf("4. Exit\n");
        printf("Please select an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter the amount to add: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful! Updated balance: %.2f\n", balance);
                } else {
                    printf("Deposit amount must be positive.\n");
                }
                break;

            case 3:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal complete! Remaining balance: %.2f\n", balance);
                } else {
                    printf("Withdrawal failed. Check amount or balance.\n");
                }
                break;

            case 4:
                printf("Thank you for banking with us. Goodbye!\n");
                return 0;

            default:
                printf("Invalid option. Please choose again.\n");
        }
    }
}

