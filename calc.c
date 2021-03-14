//This is the a c program of calculator

#include<stdlib.h>
#include<stdio.h>

int main(){
    //variables defining
    float a, b;
    char operation;

    printf("What operation do you want to do : \n+\n-\n*\n/\n:");
    scanf(" %c", &operation);

    //Addition
    if (operation == '+'){
        printf("Enter the first number\n");
        scanf("%f", &a);
        printf("Enter the second number\n");
        scanf("%f", &b);
        printf("The result is %f", a + b);
    }

    //Subtraaction
    else if (operation == '-')
    {
        printf("Enter the first number\n");
        scanf("%f", &a);
        printf("Enter the second number\n");
        scanf("%f", &b);
        printf("The result is %f", a - b);
    }

    //Multiplication
    else if (operation == '*')
    {
        printf("Enter the first number\n");
        scanf("%f", &a);
        printf("Enter the second number\n");
        scanf("%f", &b);
        printf("The result is %f", a * b);
    }

    //Division
    else if (operation == '/')
    {
        printf("Enter the first number\n");
        scanf("%f", &a);
        printf("Enter the second number\n");
        scanf("%f", &b);
        printf("The result is %f", a / b);
    }
    return 0;
}