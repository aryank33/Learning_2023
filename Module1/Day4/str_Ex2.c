#include <stdio.h>

int StringToInt(const char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i = 1;  
    }

    while (str[i] != '\0') {
        int digit = str[i] - '0';
        result = result * 10 + digit;
        i++;
    }
    result *= sign;
    return result;
}

int main() {
    char str[100];
    
    printf("Enter a number: ");
    scanf("%s", str);
    
    int num = StringToInt(str);
    
    printf("The converted integer is: %d\n", num);
    
    return 0;
}