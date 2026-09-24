#include <stdio.h>

int main(){

    int n1,n2;
    char op;

    printf(" Enter the first number -");
    scanf("%d",&n1);

    printf("Enter the opration you want to proform -");
    scanf(" %c",&op);

    printf(" Enter the second number-");
    scanf("%d",&n2);

switch(op){

    case'+':
    printf("= %d \n",n1+n2);
    break;

    case'-':
    printf("= %d \n",n1-n2);
    break;

    case'*':
    printf("= %d \n",n1*n2);
    break;

    case'/':
    printf("= %d \n",n1/n2);
    break;

    default:
    printf(" invalid opration ");
    break;

}
return 0;
}


