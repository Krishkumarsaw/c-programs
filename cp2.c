#include <stdio.h>

int main(){
    int c;

    printf("enter temperature in clesious -");
    scanf("%d",&c);

    float f = (9.0/5)*c+32;

    printf("%d c in feranhite %.2f ",c,f);

    return 0;
}