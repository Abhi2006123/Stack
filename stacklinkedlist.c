#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(){
    struct node *newnode;
    int value;
     newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL){
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter the value to be pushed: ");
    scanf("%d",&value);
    newnode->data = value;
    newnode->next = top;   
    top = newnode;
}
void pop(){
    if(top == NULL){
        printf("Stack Underflow\n");
    } else {
        struct node *temp = top;
        printf("%d popped\n", temp->data);
        top = top->next;
        free(temp);
    }
}
void traversing(){
    if(top == NULL){
        printf("Stack is empty\n");
    } else {
        struct node *temp = top;
        printf("Stack elements are: ");
        while(temp != NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main() {
    int choice;
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: traversing(); break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}

