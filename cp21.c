#include <stdio.h>
#include <stdlib.h>

struct address {
    char location[50];
    int pin_code;
};

typedef struct {
    char name[20];
    int roll_no;
    float cgpa;
    struct address addr;
} student;


void display(student s) {
    printf("\n--- Student Details ---\n");
    printf("NAME: %s\n", s.name);
    printf("ROLL NO: %d\n", s.roll_no);
    printf("CGPA: %.2f\n", s.cgpa);
    printf("LOCATION: %s\n", s.addr.location);
    printf("PIN CODE: %d\n", s.addr.pin_code);
}


void update(student *s) {
    int c;

    printf("\nWhat do you want to update?\n");
    printf("1) NAME\n");
    printf("2) ROLL NO\n");
    printf("3) CGPA\n");
    printf("4) ADDRESS\n");
    printf("5) PIN CODE\n");
    printf("Your choice: ");
    scanf("%d", &c);

    switch (c) {

        case 1:
            printf("Current name: %s\n", s->name);
            printf("Enter new name: ");
            scanf("%19s", s->name);
            break;

        case 2:
            printf("Current roll no: %d\n", s->roll_no);
            printf("Enter new roll no: ");
            scanf("%d", &s->roll_no);
            break;

        case 3:
            printf("Current CGPA: %.2f\n", s->cgpa);
            printf("Enter new CGPA: ");
            scanf("%f", &s->cgpa);
            break;

        case 4:
            printf("Current location: %s\n", s->addr.location);
            printf("Enter new location: ");
            scanf("%49s", s->addr.location);
            break;

        case 5:
            printf("Current PIN code: %d\n", s->addr.pin_code);
            printf("Enter new PIN code: ");
            scanf("%d", &s->addr.pin_code);
            break;

        default:
            printf("Invalid choice!\n");
    }
}


int main() {

    int n;

    printf("Enter no of students: ");
    scanf("%d", &n);

    
    student *students;

    students = malloc(n * sizeof(student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {

        printf("\n--- Enter Student %d Details ---\n", i + 1);

        printf("Enter Name: ");
        scanf("%19s", students[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter CGPA: ");
        scanf("%f", &students[i].cgpa);

        printf("Enter Location: ");
        scanf("%49s", students[i].addr.location);

        printf("Enter PIN Code: ");
        scanf("%d", &students[i].addr.pin_code);
    }


    for (int i = 0; i < n; i++) {
        display(students[i]);
    }

    char c;
    int nm;
    printf("Want to update y/n -");
    scanf(" %c",&c);
    if(c=='y'){
        printf("Enter which student to edit - ");
        scanf("%d",&nm);
        update(&students[nm]);
        for (int i = 0; i < n; i++) {
        display(students[nm]);
    }
    }

    free(students);

    return 0;
}