#include<stdio.h>
int biggestUsingIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
int biggestUsingTernary(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    int a = biggestUsingIfElse(num1, num2);
    int b = biggestUsingTernary(num1, num2);
    
    printf("Using if-else, the biggest number is: %d\n", a);
    printf("Using ternary operator, the biggest number is: %d\n", b);
    
    return 0;
}