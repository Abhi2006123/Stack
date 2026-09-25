#include <stdio.h>

int main() {
    char name[50];   
    int age;         

    printf("Enter your name: ");
    scanf("%s", name);   

    printf("Enter your age: ");
    scanf("%d", &age);   

    printf("\nYour name is %s and your age is %d\n", name, age);

    return 0;
}
