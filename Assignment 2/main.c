#include <stdio.h>

int correct_pin = 2070;
float balance = 5000;

// Function declarations
int login();
void menu();
void checkBalance();
void deposit();
void withdraw();

int main() {
    int access = login();

    if (access == 0) {
        return 0;
    }

    int choice;

    do {
        menu();
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}

// Login function
int login() {
    int pin;
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correct_pin) {
            printf("Login successful\n");
            return 1;
        } else {
            printf("Wrong PIN\n");
            attempts++;
        }
    }

    printf("Too many failed attempts\n");
    return 0;
}

// Menu function
void menu() {
    printf("\n--- ATM MENU ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

// Check balance
void checkBalance() {
    printf("Balance: %.2f\n", balance);
}

// Deposit money
void deposit() {
    float amount;
    printf("Enter amount: ");
    scanf("%f", &amount);

    if (amount > 0) {
        balance = balance + amount;
        printf("Money deposited\n");
    } else {
        printf("Invalid amount\n");
    }
}

// Withdraw money
void withdraw() {
    float amount;
    printf("Enter amount: ");
    scanf("%f", &amount);

    if (amount <= balance && amount > 0) {
        balance = balance - amount;
        printf("Take your cash\n");
    } else {
        printf("Insufficient balance\n");
    }
}
