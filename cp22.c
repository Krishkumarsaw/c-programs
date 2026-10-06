#include<stdio.h>

typedef struct
{
    int integer;
    float floa;
    char chracter[50];
}structdata;

typedef union
{
    int integer;
    float floa;
    char chracter[50];
}uniondata;


structdata s1;
uniondata  u1;


void teststructure(){
    
    printf("Testing structure:\n");

    printf("enter int value of structure -");
    scanf("%d", &s1.integer);
    printf("\nThe int value of structure is %d\n",s1.integer);

    printf("enter float of structure -");
    scanf("%f", &s1.floa);
    printf("\nThe int value of structure is %d\n",s1.integer);
    printf("The float value of structure is %f\n",s1.floa);

    
    printf("enter string value of structure -");
    scanf("%s", &s1.chracter);
    printf("\nThe int value of structure is %d\n",s1.integer);
    printf("The float value of structure is %f\n",s1.floa);
    printf("The string value of structure is %s\n",s1.chracter);


}


void testunion(){

    printf("Testing union:\n");

    printf("enter int value of union -");
    scanf("%d", &u1.integer);
    printf("\nThe int value of union is %d\n",u1.integer);

    printf("enter float of union -");
    scanf("%f", &u1.floa);
    printf("\nThe int value of union is %d\n",u1.integer);
    printf("The float value of union is %f\n",u1.floa);


    printf("enter string value of union -");
    scanf("%s", &u1.chracter);
    printf("\nThe int value of union is %d\n",u1.integer);
    printf("The float value of union is %f\n",u1.floa);
    printf("The string value of union is %s\n",u1.chracter);
}

int main(){

    teststructure();
    testunion();

    printf("Size of strucure - %zu \n",sizeof(structdata));
    printf("Size of  union   - %zu \n",sizeof(uniondata));
    
    return 0;
}








    
    

   