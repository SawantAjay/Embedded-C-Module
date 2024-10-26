/*Write a C program to input data like: num 1, num 2 and arithmetic operation from user and perform task.*/

//Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){

    int num1,num2,result;
    char operation;

    printf ("Enter first number:");
    scanf("%d",&num1);

    printf ("Enter second number:");
    scanf("%d",&num2);

    printf("Enter character (+,-,*,/):");
    scanf(" %c",&operation);

    switch(operation){
        case '+':
        result=num1+num2;
        printf("Result: %d\n",result);
        break;

        case '-':
        result=num1-num2;
        printf("Result: %d\n",result);
        break;

        case '*':
        result=num1*num2;
        printf("Result: %d\n",result);
        break;

        case '/':
        if(num2!=0){
        result=num1/num2;
        printf("Result: %d\n",result);
        }
        else{printf("can't division by zero\n");}
        break;

        default:{
            printf("Invalid operator: please choose correct operator(+,-,*,/)\n");
        }

    }
    return 0;
}