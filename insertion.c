#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};
struct Node *head = NULL;

void insertFirst() {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    int data;
    printf("Enter data to insert at first: ");
    scanf("%d", &data);

    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}
void insertLast() {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    int data;
    printf("Enter data to insert at last: ");
    scanf("%d", &data);

    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}
void deleteFirst() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    }
    free(temp);
    printf("First node deleted\n");
}
void deleteLast() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = head;
    if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Last node deleted\n");
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    free(temp);
    printf("Last node deleted\n");
}
void traverseForward() {
    struct Node *temp = head;
    printf("List (forward): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void traverseBackward() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    printf("List (backward): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at First\n");
        printf("2. Insert at Last\n");
        printf("3. Delete First\n");
        printf("4. Delete Last\n");
        printf("5. Traverse Forward\n");
        printf("6. Traverse Backward\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertFirst(); break;
            case 2: insertLast(); break;
            case 3: deleteFirst(); break;
            case 4: deleteLast(); break;
            case 5: traverseForward(); break;
            case 6: traverseBackward(); break;
            case 7: exit(0);  break;
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
