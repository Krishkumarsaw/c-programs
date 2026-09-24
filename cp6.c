#include <stdio.h>

int fact(int a);

int main(){
    
    int a;
    printf("Enter the number to find factorial-");
    scanf("%d",&a);

    int f =fact(a);
    printf("Factorial the the given number is %d ",f);
    return 0;
}

int fact(int a){
    int c=1;
    for(int i=1;i<=a;i++){
        c=c*i;
    }
    return c;
}