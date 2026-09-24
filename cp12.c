#include <stdio.h>

void asc(int arr[]);
void dsc(int arr[]);

int main(){

    int n = 10;
    int arr[n];

    printf("Enter array elements upto 10 = ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("1) ascending\n2) descending\nEnter choice = ");
    int sw;
    scanf("%d", &sw);

    switch(sw){
        case 1:
            asc(arr);
            break;
        case 2:
            dsc(arr);
            break;
        default:
            printf("Invalid input");
    }

    printf("Arr[");
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
    printf("]\n");

    return 0;
}

void asc(int arr[]){
    int temp;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9 - i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void dsc(int arr[]){
    int temp;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9 -i; j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}