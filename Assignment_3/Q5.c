/*Write a C program to compute the factorial of a given positive integer using a for loop.*/

//Author Name: Ajay Rajaram Sawant

#include <stdio.h>
 
 int main(){

    int n,mul=1;
    
    printf("Enter any number: ");
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {

        mul *=i;
        
    }
     
printf("factorial of +ve numbers: %d\n",mul);

return 0;
 }