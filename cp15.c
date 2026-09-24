#include <stdio.h>

int sherch(int arr[],int n,int t);

int main(){

    int t,n = 10;
    int arr[n];

    printf("Enter the size of array =");
    scanf("%d",&n);

    printf("Enter the array elements =\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);

    }
    printf("Enter the targat element = ");
    scanf("%d",&t);

    sherch(arr,n,t);

    return 0;

}

int sherch(int arr[],int n,int t){
    int c;
    for(int i = 0; i < n-1; i++){
        if(arr[i] == t){
            printf("Match Found At %dth Place",i+1);
        }
        else
        {printf("No Match Found !!");
        }
    } 
}