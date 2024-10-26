/*Write a C program to input two numbers from user and add them.
Use different functions for different functionalities.*/

/*Author Name: Ajay Rajaram Sawant*/

#include<stdio.h>

     int num1,num2;  //global variable


    int inputnumber(){   //function to input a number

    printf("enter first number: ");
    scanf("%d",&num1);

       printf("enter second number: ");
    scanf("%d",&num2);
 
    }

    int addnumber(int num1, int num2){   //function to add two numbers
        return num1+num2;

    }

    int main(){
    inputnumber();   //calling to function 

    int sum= addnumber(num1,num2);

    printf("the sum of two numbers is: %d\n",sum);

    return 0;

    }

  








