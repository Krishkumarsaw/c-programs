#include <stdio.h>

int removeDuplicates(int arr[], int n);

int main(){

    int n = 10;

    printf("Enter the size of array -");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter thr array values-\n");

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    n = removeDuplicates(arr,n);

    printf("Arr[");
    for(int i = 0; i < n; i++){
        printf("%d,",arr[i]);
    
    }
    printf("]\n");
    
return 0;
}

int removeDuplicates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;      
                j--;
                      
            }
        }
    }
    return n; 
}
