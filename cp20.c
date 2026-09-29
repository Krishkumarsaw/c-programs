#include<stdio.h>


void swap(){

    int nm1,nm2;
    int *p1 = &nm1, *p2 = &nm2;

    printf("Enter the 1st num to swap :");
    scanf("%d", &nm1);

    printf("Enter the 2nd num to swap :");
    scanf("%d", &nm2);

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    printf("Before : N1 = %d | N2 = %d\n",nm2,nm1);
    printf("After : N1 = %d | N2 = %d\n",nm1,nm2);

}

void reversearray(){

    int n, c = 0;
    printf("Enter the size of array :");
    scanf("%d",&n);

    int arr[n] ,arrrev[n];

    printf("Enter the first array elements = ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = n - 1; i >= 0; i-- ){
        arrrev[c]=arr[i];
        c++;
    }

    printf("Reversed Array - [");
    for(int i = 0; i < n; i++){
        printf("%d,",arrrev[i]);
    }
    printf("]");

}

void pointertoponiter(){

    int a,b;
    
    printf("input \nno 1 -");
    scanf("%d",&a);
    printf("no 2 -");
    scanf("%d",&b);
    
    int *p = &a , **pp = &p;

    *pp = &b;

    printf("Before *p = %d\n",a);
    printf("After *p = %d\n",*p);
}


int main(){

    printf("Options :\n1)swap to numbers\n2)reverse an array\n3)Modify pointer through pointer-to-pointer");

    int c;
    printf("Enter your choise 1,2,3 -");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        swap();
        break;
    case 2:
        reversearray();
        break;
    case 3:
        pointertoponiter();
        break;
    
    default:
        printf("Wrong input !!!");
        break;
    }
    printf("\nEXITED !!!");

    return 0;
}