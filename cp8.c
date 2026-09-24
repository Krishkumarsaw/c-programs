#include <stdio.h>


int rev(int nm){

    int r=0;
    while(nm !=0){

        r= r*10+nm%10;
        nm= nm/10;
    }
    return r;
}
int  ispalindrome(int nm){
    
    if(nm==rev(nm))
    return 1;
    else
    return 0;
}

int main(){

    int c,nm;
    printf(" 1) reverse of the number \n 2) palindrome check \n ");
    printf("Enter your choice 1,2 ? -");
    scanf("%d",&c);

    printf("Enter the number-");
    scanf("%d",&nm);

    switch(c){

        case 1:
        printf("Reverse of the number is %d",rev(nm));
        break;

        case 2:
        printf("Palindromme check %s",ispalindrome(nm)?"true":"false");
        break;

        default:
        printf("Invalid choice !!");
    }
    return 0;

}