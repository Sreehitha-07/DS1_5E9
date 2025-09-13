#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct queue {
    struct node *front, *rear;
};

void create_queue(struct queue *q) {
    q->front = q->rear = NULL;
}

void enqueue(struct queue *q, int val) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (!ptr) {
        printf("Memory allocation failed!\n");
        return;
    }
    ptr->data = val;
    ptr->next = NULL;

    if (q->rear == NULL) {
        q->front = q->rear = ptr;
    } else {
        q->rear->next = ptr;
        q->rear = ptr;
    }
    printf("%d inserted into queue\n", val);
}

void dequeue(struct queue *q) {
    if (q->front == NULL) {
        printf("QUEUE UNDERFLOW\n");
        return;
    }
    struct node *temp = q->front;
    printf("Deleted: %d\n", temp->data);
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
}

int peek(struct queue *q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->front->data;
}

void display(struct queue *q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct node *temp = q->front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct queue q;
    create_queue(&q);
    int val, option;

    while (1) {
        printf("\n--------- MAIN MENU ---------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter the value to insert into queue: ");
                scanf("%d", &val);
                enqueue(&q, val);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                val = peek(&q);
                if (val != -1)
                    printf("Front element: %d\n", val);
                break;
            case 4:
                display(&q);
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid option!\n");
        }
    }
    return 0;
}


