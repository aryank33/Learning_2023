#include<stdio.h>

int minmaxarray(int arr[], int num){
    int min=arr[0], max=arr[0];
    for(int i=0; i<num; i++){
        if (min>arr[i]){
            min=arr[i];
        }
        else if (max<arr[i]){
            max=arr[i];
        }
    }
    printf("minimum of array is : %d\n",min);
    printf("maximum of array is : %d\n",max);
}

int main(){
    
    int arr[1000], num;
    
    printf("Enter the size of an array :");
    scanf("%d", &num);

    printf("Enter the elements in the array :");
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    minmaxarray(arr, num);
    return 0;
}