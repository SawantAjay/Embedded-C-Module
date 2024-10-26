/*Write a C program to print the multiplication table for a number up to 10 using nested for loops.
the number should input by user.*/

//Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){

    int num,i,j;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=1; i<=10; i++){

        for (j=1; j<=i; j++){


        } printf("%d * %d =%d",num,i,num*i);
         printf("\n");
    }
    return 0;
}