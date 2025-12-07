#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n--- Results ---\n");
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Division: %d\n", num1 / num2);
        printf("Modulus: %d\n", num1 % num2);
    } else {
        printf("Division: Error! Cannot divide by zero.\n");
        printf("Modulus: Error! Cannot divide by zero.\n");
    }

    return 0;
}
i
