#include <stdio.h>
#define MAX 5
int stack[5];
int top = -1;
void push(int value) {
if (top == MAX - 1) {
 printf("Stack Overflow!");
 } 
 else {
 top++;
 stack[top] = value;
printf("%d pushed\n", value);
 }
}
void pop() {
 if (top == -1) {
  printf("Stack Underflow!\n");
 } else {
  printf("%d popped\n", stack[top--]);
    }
}
int main(){
    push(10);
    push(20);
    push(30);

    pop(10);
    pop(20);
    pop(30);

return 0;
}


