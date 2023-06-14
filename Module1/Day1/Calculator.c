#include <stdio.h>

float calculator(float num1, char operator, float num2) {
    float result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 0;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 0;
    }
    return result;
}

int main() {
    float num1, num2;
    char operator;

    printf("Enter Operand 1: ");
    scanf("%f", &num1);

    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Operand 2: ");
    scanf("%f", &num2);

    float result = calculator(num1, operator, num2);
    printf("Result: %.2f\n", result);

    return 0;
}
