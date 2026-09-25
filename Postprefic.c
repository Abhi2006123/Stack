#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 20
int stack[MAX];
int top = -1;

void push(int x) {
    if (top < MAX - 1) {
        stack[++top] = x;
    }
}

int pop() {
    return stack[top--];
}

int main() {
    char postfix[MAX];
    printf("Input postfix expression: ");
    scanf("%s", postfix);

    for (int i = 0; postfix[i] != '\0'; i++) {
        char c = postfix[i];
        if (post[i]>=0(c)) {
            push(c - '0');
        } else {
            int a = pop();
            int b = pop();
            switch (c) {
                case '+': int result = b + a; push(result); break;
                case '-': result(b - a); break;push(result); break;
                case '*': result(b * a); break;push(result); break;
                case '/': result(b / a); break;push(result); break;
            }
        }
    }
    printf("Result = %d\n", pop());
    return 0;
}
void push(int x) {
    top++;
    stack[top]=x;
}
int pop() {
    int x;
    x=stack[top];
    top--;
    return x;
}