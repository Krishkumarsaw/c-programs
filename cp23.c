
#include <stdio.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

void push(int nm){
    if(top == MAX_SIZE-1){
        printf("Stack is full !!!");
    }
    else{
        top = top + 1;
        stack[top] = nm;
        printf("Push sucess,");
    }
}

void pull(){
    if(top == -1){
        printf("Stack is empty !!!");
    }
    else{
        printf("Pull item - %d\n",stack[top]);
        top = top - 1;
    }
}

void peek(){
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }

    printf("Top: %d\n",stack[top]);
}

void displaystk(){
    if(top == -1){
        printf("Stack is empty !!!\n");
        return;
    }

    printf("stack elements are: \n");

    for(int i = top; i >= 0; i--){
        printf("%d, ",stack[i]);
    }
}

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int nm){
    if(rear == MAX_SIZE-1){
        printf("Queue is full !!!");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear = rear + 1;
        queue[rear] = nm;
    }
}

void dequeue(){
    if(front == -1){
        printf("Queue is empty !!!");
    }
    else{
        printf("Dequeue item : %d\n",queue[front]);

        if(front == rear){
            front = rear = -1;
        }
        else{
            front = front + 1;
        }
    }
}

void peekq(){
    if(front == -1){
        printf("Queue is empty !!!\n");
        return;
    }

    printf("Front: %d\n",queue[front]);
}

void displayqe(){
    if(front == -1){
        printf("Queue is empty !!!\n");
        return;
    }

    for(int i = front; i <= rear; i++){
        printf("%d, ",queue[i]);
    }
    printf("\n");
}

int crlqueue[MAX_SIZE];
int cfront = -1, crear = -1;

void enqueuec(int nm){
    if(cfront == -1 && crear == -1){
        cfront = 0;
        crear = 0;
        crlqueue[crear] = nm;
        printf("Enqueue sucess !!!");
    }
    else if((crear + 1) % MAX_SIZE == cfront){
        printf("Queue is full !!!");
    }
    else{
        crear = (crear + 1) % MAX_SIZE;
        crlqueue[crear] = nm;
        printf("Enqueue sucess !!!");
    }
}

void dequeuec(){
    if(cfront == -1 || crear == -1){
        printf("Queue is empty !!!");
    }
    else if(cfront == crear){
        printf("Dequeue element : %d\n",crlqueue[cfront]);
        cfront = -1;
        crear = -1;
    }
    else{
        printf("Dequeue element : %d\n",crlqueue[cfront]);
        cfront = (cfront + 1) % MAX_SIZE;
    }
}

void peekc(){
    if(cfront == -1){
        printf("Circular queue is empty !!!\n");
        return;
    }

    printf("Front: %d\n",crlqueue[cfront]);
}

void displaycq(){
    if(cfront == -1 || crear == -1){
        printf("Circular queue is empty !!!\n");
        return;
    }

    printf("Circular queue items: ");

    int i = cfront;

    while(1){
        printf("%d, ",crlqueue[i]);

        if(i == crear){
            break;
        }

        i = (i + 1) % MAX_SIZE;
    }

    printf("\n");
}

int main(){

    int ch, cs, cq, ccq;

    while(1){

        printf("\n1) Stack\n2) Queue\n3) Circular queue\n4) Exit\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch){

            case 1:

                while(1){
                    printf("\n1) Push\n2) Pull\n3) Peek\n4) Display\n5) Exit\nEnter your choice: ");
                    scanf("%d",&cs);

                    switch(cs){

                        case 1: {
                            int p;
                            char c;
                            do{
                                printf("Enter push element: ");
                                scanf("%d",&p);
                                push(p);
                                printf("\nWant to continue (y/n): ");
                                scanf(" %c",&c);
                            }while(c == 'y' || c == 'Y');
                            break;
                        }

                        case 2: {
                            char c;
                            do{
                                pull();
                                printf("Want to continue (y/n): ");
                                scanf(" %c",&c);
                            }while(c == 'y' || c == 'Y');
                            break;
                        }

                        case 3:
                            peek();
                            break;

                        case 4:
                            displaystk();
                            break;

                        case 5:
                            break;

                        default:
                            printf("Invalid choice !!!\n");
                    }

                    if(cs == 5)
                        break;
                }
                break;

            case 2:

                while(1){
                    printf("\n1) Enqueue\n2) Dequeue\n3) Peek\n4) Display\n5) Exit\nEnter your choice: ");
                    scanf("%d",&cq);

                    switch(cq){

                        case 1: {
                            int p;
                            char c;
                            do{
                                printf("Enter enqueue element: ");
                                scanf("%d",&p);
                                enqueue(p);
                                printf("\nWant to continue (y/n): ");
                                scanf(" %c",&c);
                            }while(c == 'y' || c == 'Y');
                            break;
                        }

                        case 2: {
                            char c;
                            do{
                                dequeue();
                                printf("Want to continue (y/n): ");
                                scanf(" %c",&c);
                            }while(c == 'y' || c == 'Y');
                            break;
                        }

                        case 3:
                            peekq();
                            break;

                        case 4:
                            displayqe();
                            break;

                        case 5:
                            break;

                        default:
                            printf("Invalid choice !!!\n");
                    }

                    if(cq == 5)
                        break;
                }
                break;

            case 3:

                while(1){
                    printf("\n1) Enqueue\n2) Dequeue\n3) Peek\n4) Display\n5) Exit\nEnter your choice: ");
                    scanf("%d",&ccq);

                    switch(ccq){

                        case 1: {
                            int p;
                            char c;
                            do{
                                printf("Enter enqueue element: ");
                                scanf("%d",&p);
                                enqueuec(p);
                                printf("\nWant to continue (y/n): ");
                                scanf(" %c",&c);
                            }while(c == 'y' || c == 'Y');
                            break;
                        }

                        case 2: {
                            char c;
                            do{
                                dequeuec();
                                printf("Want to continue (y/n): ");
                                scanf(" %c",&c);
                            }while(c == 'y' || c == 'Y');
                            break;
                        }

                        case 3:
                            peekc();
                            break;

                        case 4:
                            displaycq();
                            break;

                        case 5:
                            break;

                        default:
                            printf("Invalid choice !!!\n");
                    }

                    if(ccq == 5)
                        break;
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice !!!\n");
        }
    }
}
