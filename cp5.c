#include <stdio.h>

int main(){

    int nm,c;
    printf("Enter the number whose multiplication table you want -");
    scanf("%d",&nm);

    printf("How far you wanna Go -");
    scanf("%d",&c);


for(int i=1;i<=c;i++){
    printf("%d X %d = %d\n",nm,i,nm*i);
    
}
}