#include <stdio.h>

    int s_no;
    int sub_no;
    int s_marks[100][20];

void input(){
    
    printf("Enter total number of student in the Class :");
    scanf("%d",&s_no);
    
    printf("Enter total no of Subjects :");
    scanf("%d",&sub_no);
    
    for(int i=0; i<s_no; i++){
        for(int j=0; j<sub_no; j++){
            printf("Enter marks of student %d in subject %d ",i+1,j+1);
            scanf("%d",&s_marks[i][j]);
        }
    }
}

void analysis(){

    int tm[s_no], avgm[s_no], p_age[s_no],student[s_no];;

    for (int i = 0; i < s_no; i++) {

        tm[i] = 0;
        student[i] = i + 1;
        printf("Student %d:\n", i + 1);

        for (int j = 0; j < sub_no; j++) {
            printf("subject %d = %d\n",j+1, s_marks[i][j]);
            tm[i] = tm[i] + s_marks[i][j];
        }

        avgm[i] = tm[i] / sub_no;
        p_age[i] = (tm[i] * 100) / (sub_no * 100);

        printf("Total marks = %d\n", tm[i]);
        printf("Average marks = %d\n", avgm[i]);
        printf("Percentage = %d%%\n\n", p_age[i]);
    }

    char yn;
    printf("Do you want to sort Y/N -");
    scanf(" %c",&yn); 
    while(yn=='Y' || yn=='y'){
        for (int i = 0; i < s_no - 1; i++) {

            for (int j = 0; j < s_no - i - 1; j++) {

                if (tm[j] < tm[j+1]) {
                    int temp = tm[j];
                    tm[j] = tm[j+1];
                    tm[j+1] = temp;

                    temp = student[j];
                    student[j] = student[j + 1];
                    student[j + 1] = temp;
                        
                    
                }
            }
            break;
        }
        for(int i = 0; i<s_no; i++){
        printf("Student %d total marks = %d\n",student[i],tm[i]);
        }
    
        printf("\nHighest scorer -\n Student %d total marks = %d\n",student[0],tm[0]);
        printf("\nLowest scorer -\n Student %d total marks = %d\n",student[s_no-1],tm[s_no-1]);
        break;
           
         
    }
    
}


void search(){
    char yn;
    int no;

    while(1){
        printf("Enter student no -");
        scanf("%d",&no);
        printf("marks :\n");
        for(int i =0 ; i < sub_no; i++){
            printf("subject %d = %d\n",i+1,s_marks[no-1][i]);
        }
        printf("Do you want to continue Y/N -");
        scanf(" %c",&yn);

        if(yn=='N' || yn=='n'){
            break;
        }
    }
}
        


int main(){
    
    input();

    while(1){

        int c;
        printf("\nOptions -\n1) Analysis & Sorting\n2) Searching\n3) Exit\n");
        scanf("%d", &c);

        switch (c){

            case 1:
                analysis();
                break;

            case 2:
                search();
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Wrong Choice !!!");
        }

        if(c == 3){
            break;
        }
    }

    return 0;
}