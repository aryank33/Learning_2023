#include<stdio.h>

int diffevenodd(int a[], int size){
    int even=0; 
    int odd=0;
    for(int i=0; i<size; i++){
        if(a[i]%2==0){
            even+=a[i];
        }
        else{
            odd+=a[i];
        }
        return even-odd;
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
    int diff= diffevenodd(a, size);
    printf("Diff between even & odd elements : %d\n", diff);
    return 0;
}
