/*  Write a C program to print maximum number among 2 using macro-MAX.*/

//Author_Name: Ajay Rajaram Sawant

#include<stdio.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main(){

    int num1,num2,maximum;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    maximum= MAX(num1,num2);

    printf("The maximum of between %d and %d is: %d\n",num1,num2,maximum);

    return 0;

}