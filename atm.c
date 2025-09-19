#include <stdio.h>

// Function prototypes
void check_balance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main() {
    double balance = 1000.0; // initial balance
    int choice;

    printf("===== Welcome to ATM Simulation =====\n");

    do {
        // Menu
        printf("\nPlease choose an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                check_balance(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                printf("\nThank you for using the ATM. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}

// Function to check balance
void check_balance(double balance) {
    printf("\nYour current balance is: %.2f\n", balance);
}

// Function to deposit money
double deposit(double balance) {
    double amount;
    printf("\nEnter amount to deposit: ");
    scanf("%lf", &amount);

    if(amount <= 0) {
        printf("Invalid deposit amount. Must be positive.\n");
    } else {
        balance += amount;
        printf("Deposit successful! New balance: %.2f\n", balance);
    }
    return balance;
}

// Function to withdraw money
double withdraw(double balance) {
    double amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%lf", &amount);

    if(amount <= 0) {
        printf("Invalid withdrawal amount. Must be positive.\n");
    } else if(amount > balance) {
        printf("Insufficient funds. Your balance is: %.2f\n", balance);
    } else {
        balance -= amount;
        printf("Withdrawal successful! New balance: %.2f\n", balance);
    }
    return balance;
}
