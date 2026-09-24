#include <stdio.h>

int countodd(int arr[],int n);
int counteven(int arr[],int n);

int main(){
    
    int cevn,codd,n = 10;

    printf("Enter the size of array -");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter thr array values-\n");

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    codd = countodd(arr,n);
    cevn = counteven(arr,n);

    printf("EVEN COUNT = %d\nODD COUNT = %d",cevn,codd);

    return 0;

}    

    
int counteven(int arr[],int n){

    int c=0;
        
    for(int i = 0; i < n; i++){
         if( arr[i] % 2 == 0 ){
            c++;
        }
    }
    return c;
}

int countodd(int arr[],int n){

    int c=0;

    for(int i = 0; i < n; i++){
        if( arr[i] % 2 != 0 ){
            c++;
        }
    }    
    return c;    
        
}

 