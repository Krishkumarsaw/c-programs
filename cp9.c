#include <stdio.h>

int gcd(int a,int b){

    while(b!=0){

        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int lcm(int a,int b){

    int l;
    l=a*b/gcd(a,b);

    return l;
}

int main(){

    int a,b,g,l;
    printf("\nEnter the two number to find GCD/LCM (as a,b) -");
    scanf("%d,%D",&a,&b);


    printf("GCD of (%d,%d) is %d \n",a,b,gcd(a,b));
    printf("LCM of (%d,%d) is %d \n",a,b,lcm(a,b));

    return 0;

}