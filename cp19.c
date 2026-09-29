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

    int tm[s_no], avgm[s_no], p_age[s_no];

    for (int i = 0; i < s_no; i++) {

        tm[i] = 0;
        printf("\nStudent %d:\n", i + 1);

        for (int j = 0; j < sub_no; j++) {
            printf("\nsubject %d = %d\n",j+1, s_marks[i][j]);
            tm[i] = tm[i] + s_marks[i][j];
        }

        avgm[i] = tm[i] / sub_no;
        p_age[i] = (tm[i] * 100) / (sub_no * 100);

        printf("Total marks = %d\n", tm[i]);
        printf("Average marks = %d\n", avgm[i]);
        printf("Percentage = %d%%\n\n", p_age[i]);
    }
}
        
        


int main(){

    input();
    analysis();

    return 0;
}