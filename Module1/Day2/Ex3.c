#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements in array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for(int i=0; i<size; i+=2){
        sum += arr[i];    
    }
    printf("Sum of alternate array is: %d\n", sum);
    return 0;
}