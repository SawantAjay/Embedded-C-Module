/*Write a C program to find out maximum out of 3 numbers entered by user.*/

//Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){


int num1,num2,num3;

printf("Enter three numbers: ");
scanf("%d%d%d",&num1,&num2,&num3);


if(num1>num2 && num1>num3)
{

    printf("1st number is max: %d",num1);
}
 
 else if(num2>num1 && num2>num3)
 {

    printf("2nd number is max: %d",num2);
 }
 else
 {
    printf("3rd number is max: %d",num3);

 }
return 0;
}