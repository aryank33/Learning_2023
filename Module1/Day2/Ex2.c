#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(void *a, void *b, size_t size) {
    char *temp = (char *)malloc(size);  
    memcpy(temp, a, size);  
    memcpy(a, b, size);     
    memcpy(b, temp, size);  
    free(temp);           
}

int main() {
    int num1, num2;
    float f1, f2;
    char char1, char2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &f1, &f2);

    printf("Enter two characters: ");
    scanf(" %c %c", &char1, &char2);

    swap(&num1, &num2, sizeof(int));
    printf("After swapping integers: num1=%d, num2=%d\n", num1, num2);

    swap(&f1, &f2, sizeof(float));
    printf("After swapping floating-point numbers: f1=%f, f2=%f\n", f1, f2);

    swap(&char1, &char2, sizeof(char));
    printf("After swapping characters: char1=%c, char2=%c\n", char1, char2);

    return 0;
}
