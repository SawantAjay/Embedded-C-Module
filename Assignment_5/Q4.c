/*Write a C program to input a number from user and find it's factorial with the help of function*/

// Author Name: Ajay Rajaram Sawant

#include <stdio.h>

int factorial(int n){

    int fact=1;
    for(int i=1; i<=n; i++){
    fact *= i;
}
    return fact;
}

int main(){

int num;

printf("Enter a number: ");
scanf("%d",&num);

if(num<0){

    printf("factorial of -ve number is undefined.\n");
}
    else{

        printf("factorial of %d is :%d\n",num,factorial(num));
        
    }
        return 0;
}