#include<stdio.h>
int greatestnumber(int num1, int num2, int num3){
    if (num1>num2 && num1> num3){
        return num1;    
    }else if (num2>num1 && num2>num3){
        return num2; 
    }else{
        return num3;
    }
}    
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int a = greatestnumber(num1, num2, num3);
    printf("The greatest among the 3 numbers is: %d\n", a);
    return 0;
}    
