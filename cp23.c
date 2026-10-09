
#include <stdio.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

void push(int nm){
    if(top == MAX_SIZE-1){
        printf("\nStack is full !!!\n");
    }
    else{
        top = top + 1;
        stack[top] = nm;
        printf("\nPush success.\n");
    }
}

void pull(){
    if(top == -1){
        printf("\nStack is empty !!!\n");
    }
    else{
        printf("\nPull item - %d\n",stack[top]);
        top = top - 1;
    }
}

void peek(){
    if(top == -1){
        printf("\nStack is empty\n");
        return;
    }

    printf("\nTop: %d\n",stack[top]);
}

void displaystk(){
    if(top == -1){
        printf("\nStack is empty !!!\n");
        return;
    }

    printf("\nStack elements are:\n");

    for(int i = top; i >= 0; i--){
        printf("%d, ",stack[i]);
    }
    printf("\n");
}

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int nm){
    if(rear == MAX_SIZE-1){
        printf("\nQueue is full !!!\n");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear = rear + 1;
        queue[rear] = nm;
        printf("\nEnqueue success !!!\n");
    }
}

void dequeue(){
    if(front == -1){
        printf("\nQueue is empty !!!\n");
    }
    else{
        printf("\nDequeue item: %d\n",queue[front]);

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
        printf("\nQueue is empty !!!\n");
        return;
    }

    printf("\nFront: %d\n",queue[front]);
}

void displayqe(){
    if(front == -1){
        printf("\nQueue is empty !!!\n");
        return;
    }

    printf("\nQueue elements are:\n");
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
        printf("\nCircular queue enqueue success !!!\n");
    }
    else if((crear + 1) % MAX_SIZE == cfront){
        printf("\nCircular queue is full !!!\n");
    }
    else{
        crear = (crear + 1) % MAX_SIZE;
        crlqueue[crear] = nm;
        printf("\nCircular queue enqueue success !!!\n");
    }
}

void dequeuec(){
    if(cfront == -1 || crear == -1){
        printf("\nCircular queue is empty !!!\n");
    }
    else if(cfront == crear){
        printf("\nDequeue element: %d\n",crlqueue[cfront]);
        cfront = -1;
        crear = -1;
    }
    else{
        printf("\nDequeue element: %d\n",crlqueue[cfront]);
        cfront = (cfront + 1) % MAX_SIZE;
    }
}

void peekc(){
    if(cfront == -1){
        printf("\nCircular queue is empty !!!\n");
        return;
    }

    printf("\nFront: %d\n",crlqueue[cfront]);
}

void displaycq(){
    if(cfront == -1 || crear == -1){
        printf("\nCircular queue is empty !!!\n");
        return;
    }

    printf("\nCircular queue items:\n");

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

        printf("\n========== MAIN MENU ==========\n");
        printf("1) Stack\n2) Queue\n3) Circular Queue\n4) Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch){

            case 1:

                while(1){
                    printf("\n========== STACK MENU ==========\n");
                    printf("1) Push\n2) Pull\n3) Peek\n4) Display\n5) Exit to Main Menu\n");
                    printf("Enter your choice: ");
                    scanf("%d",&cs);

                    switch(cs){

                        case 1: {
                            int p;
                            char c;
                            do{
                                printf("\nEnter push element: ");
                                scanf("%d",&p);
                                push(p);
                                printf("Want to continue (y/n): ");
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
                            printf("\nInvalid choice !!!\n");
                    }

                    if(cs == 5)
                        break;
                }
                break;

            case 2:

                while(1){
                    printf("\n========== QUEUE MENU ==========\n");
                    printf("1) Enqueue\n2) Dequeue\n3) Peek\n4) Display\n5) Exit to Main Menu\n");
                    printf("Enter your choice: ");
                    scanf("%d",&cq);

                    switch(cq){

                        case 1: {
                            int p;
                            char c;
                            do{
                                printf("\nEnter enqueue element: ");
                                scanf("%d",&p);
                                enqueue(p);
                                printf("Want to continue (y/n): ");
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
                            printf("\nInvalid choice !!!\n");
                    }

                    if(cq == 5)
                        break;
                }
                break;

            case 3:

                while(1){
                    printf("\n====== CIRCULAR QUEUE MENU ======\n");
                    printf("1) Enqueue\n2) Dequeue\n3) Peek\n4) Display\n5) Exit to Main Menu\n");
                    printf("Enter your choice: ");
                    scanf("%d",&ccq);

                    switch(ccq){

                        case 1: {
                            int p;
                            char c;
                            do{
                                printf("\nEnter enqueue element: ");
                                scanf("%d",&p);
                                enqueuec(p);
                                printf("Want to continue (y/n): ");
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
                            printf("\nInvalid choice !!!\n");
                    }

                    if(ccq == 5)
                        break;
                }
                break;

            case 4:
                printf("\nExiting program. Goodbye!\n");
                return 0;

            default:
                printf("\nInvalid choice !!!\n");
        }
    }
}
