#include <stdio.h>

int main(){
    int yr;

    printf(" Enter thr year you want to check whether it is a leap year or not-");
    scanf("%d",&yr);

if (yr%4==0){
    printf("Yes, it is a leap year");
}
else{
    printf("No, it is not a leap year");
}
}