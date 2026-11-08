//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include<stdio.h>

    enum menu{
        add=1,
        subtract,
        multiply
    };
int main() {
    int choice,a,b;
    printf("add\n");
    printf("subtract\n");
    printf("multiply\n");

    printf("enter operation choice");
    scanf("%d",&choice);
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    switch(choice) {
        case add:
        printf("result=%d",a+b);
        break;
        case subtract:
        printf("result=%d",a-b);
        break;
        case multiply:
        printf("result=%d",a*b);
        break;
    }
    return 0;
}