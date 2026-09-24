#include <stdio.h>
#include <math.h>

int isprime(int a){

    if(a<=1){
        printf("%d is not a prime number",a);
        return 0;
    }
    for(int i=2;i<=sqrt(a);i++){

        if(a % i==0){
            printf("%d is not a prime nunmber",a);
            return 0;
        }}
        printf("%d is a prime number ",a);

        return 0;
    
}

int main(){

    int a;
    printf("Enter the number to check whether it is prime or not -");
    scanf("%d",&a);

    isprime(a);
    return 0;
}