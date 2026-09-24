#include <stdio.h>

int main(){

    int t,c =0,n = 10;

    printf("Enter the size of array -");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter thr array values-\n");

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element whose frequency you wnat to check -");
    scanf("%d",&t);

    for(int i = 0; i < n; i++) {
        if(arr[i] == t){
            c+= 1;
        }
        
    }
    printf("The frequency of element %d is %d",t,c);

    return 0;
    
}