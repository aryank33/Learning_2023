#include <stdio.h>

int LargestNumber(int num) {
    int largestNumber = 0;  

    for (int i = 0; i < 4; i++) {
        int temp = num / 10;  
        for (int j = 0; j < 3; j++) {
            if (j != i) {
                temp = temp * 10 + (num % 10);
            }
            num /= 10;
        }
        if (temp > largestNumber) {
            largestNumber = temp;
        }
        num = temp;
    }

    return largestNumber;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = LargestNumber(num);

    printf("The largest number by deleting a single digit is: %d\n", largest);

    return 0;
}
