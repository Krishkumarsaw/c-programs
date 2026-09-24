#include <stdio.h>
int main(){
    int nm;
    printf("Enter the number to check whether it is even or odd -");
    scanf("%d",&nm);
    printf("%d is %s",nm,(nm%2==0)?"even":"odd");
    return 0;
}