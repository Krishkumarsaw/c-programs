#include <stdio.h>

int main(){

    int n,mn,mx,sum;

    printf("Enter teh size of array -");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter thr array values-\n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }    
    mx=arr[0];
    mn=arr[0];
    sum=0;

    for(int i=0;i<n;i++){
        

        if(arr[i]>mx){
            mx = arr[i];
        }
        if(arr[i]<mn){
            mn = arr[i];
        }
        sum = sum + arr[i];
    }
    printf("Arr[");
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    
    }
    printf("]\n");

    printf("Max value - %d\nMin value - %d\nAvg value - %d",mx,mn,sum/n);

    return 0;
}