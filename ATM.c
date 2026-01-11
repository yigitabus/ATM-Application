#include <stdio.h>

int main() {
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;

    printf("Welcome!\n");
    
    do {
        printf("\nPlease choose the operation you want to perform:\n");
        printf("1. Withdraw Money\n");
        printf("2. Deposit Money\n");
        printf("3. Check Balance\n");
        printf("0. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the amount you want to withdraw: ");
                scanf("%lf", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= amount;
                    printf("Your new balance: %.2f\n", balance);
                }
                break;

            case 2:
                printf("Enter the amount you want to deposit: ");
                scanf("%lf", &amount);
                balance += amount;
                printf("Your new balance: %.2f\n", balance);
                break;

            case 3:
                printf("Your current balance: %.2f\n", balance);
                break;

            case 0:
                printf("Exiting. Have a nice day!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}