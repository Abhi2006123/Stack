#include <stdio.h>
#include <stdlib.h>
#define MAX 5 
int stack[MAX];
int top = -1;
void push() {
      int data ;
      
if (top == MAX - 1) {
printf("Stack Overflow\n");
} else {
stack[++top] = data;
 printf("%d pushed\n", data);
}
}
void pop() {
if (top == -1) {
printf("Stack Underflow\n");
} else {
    int data = stack[top--];
printf("%d popped\n", data);
}
}
void traversing() {
if (top == -1) {
 printf("Stack is empty\n");
} else {
printf("Stack elements are: ");
for (int i = top; i >= 0; i--) {
 printf("%d ", stack[i]);
 }
printf("\n");
}
}
int main() {
push(10);
 push(20);
push(30);
traversing(); push(10);
 pop();          
traversing();   
 return 0;
}

