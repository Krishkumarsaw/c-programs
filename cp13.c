#include <stdio.h>

int rev(int arr[], int n);

int main(){

    int n;

    printf("Enter the size of array -");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter thr array values-\n");

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    rev(arr,n);

    printf("Arr[");
    for(int i = 0; i < n; i++){
        printf("%d,",arr[i]);
    
    }
    printf("]\n");
}

int rev(int arr[], int n){

    int temp;

    for(int j=0; j<n-1; j++){
        temp = arr[j];
        arr[j] = arr[n-1-j];
        arr[n-1-j] = temp;
    }
}    
