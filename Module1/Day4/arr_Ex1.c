#include <stdio.h>
void sumofarray(int arr[], int size){
    int sum = 0;
    for (int i=0; i<size; i++){
          sum += arr[i];   
    }
    float avg = (float)(sum)/size;

    printf("Sum of 1D array : %d\n", sum);
    printf("average of 1D array : %f\n", avg);
}

int main(){
    int size;
    printf("Enter the size of array :");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements in the array :\n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    sumofarray(arr, size);
    return 0;
}