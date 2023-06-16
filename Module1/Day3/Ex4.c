#include <stdio.h>
void smallestandlargestdigit(int num) {
    int small = 9;
    int large = 0;

    while(num>0){
        int digit = num%10;
        if(digit < small){
            small = digit;
        }
        if(digit > large){
            large = digit;
        }
        num /= 10;
    }
    printf("Smallest digit is: %d\n", small);
    printf("Largest digit is: %d\n", large);
}

int main(){
   int num;
   
   printf("Enter any positive integer: ");
   scanf("%d", &num);

   smallestandlargestdigit(num);
   
   return 0;
}
