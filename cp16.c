#include <stdio.h>

void combine(int arr1[], int n1, int arr2[], int n2, int arr3[]);

int main(){

    int n1, n2;

    printf("Enter the first size of array =");
    scanf("%d",&n1);

    printf("Enter the second size of array =");
    scanf("%d",&n2);

    int arr1[n1], arr2[n2];
    int n3 = n1 + n2;
    int arr3[n3];

    printf("Enter the first array elements =\n");
    for(int i = 0; i < n1; i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter the second array elements =\n");
    for(int i = 0; i < n2; i++){
        scanf("%d",&arr2[i]);
    }

    combine(arr1, n1, arr2, n2, arr3);

    printf("combined array is Arr[");
    for(int i = 0; i < n3; i++){
        printf("%d,",arr3[i]);
    }
    printf("]\n");

    return 0;
}

void combine(int arr1[], int n1, int arr2[], int n2, int arr3[]){

    for(int i = 0; i < n1; i++){
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < n2; i++){
        arr3[n1 + i] = arr2[i];
    }
}