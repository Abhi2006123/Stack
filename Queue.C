#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = newNode;
        rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct Node* temp = front;
    printf("%d dequeued\n", temp->data);
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    free(temp);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();  
    dequeue();  

    return 0;
}
