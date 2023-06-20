#include <stdio.h>

int reversearray(int a[], int size){
    int reva[size];

    for(int i=0; i<size; i++){
        reva[i]=a[size-i-1];
    }

    for(int i=0; i<size; i++){
        a[i]=reva[i];
    }
     printf("Reversed array: ");
    for (int i = 0; i < size ; i++)
    {
        printf("%d ", a[i]);
    }
}
int main(){
    int size;
    printf("Enter the size of an array :");
    scanf("%d",&size);

    int a[size];
    printf("Enter the elements in the array :");
    for(int i=0; i<size; i++){
        scanf("%d",& a[i]);
    }

    reversearray(a, size);
    return 0;
}