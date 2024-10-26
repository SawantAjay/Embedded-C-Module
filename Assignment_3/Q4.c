/*Write a C program that calculates the sum of the first n positive integers using a for loop the value
of n should be input by the user.*/

//Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){

    int n,sum=0;

    printf("Enter positive integer: ");
    scanf("%d",&n);

    for (int i=1; i<=n; i++){

    sum += i;
    

    }


    printf("sum of first n positive number is: %d\n",sum);
    return 0;

}