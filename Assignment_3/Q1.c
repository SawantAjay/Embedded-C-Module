/*Write a C program to check maximum and minimum number.
the numbers should be entered by user.*/

//Author Name: Ajay Rajaram Sawant

#include <stdio.h>

int main (){

int a,b;

printf("Enter first number: \n");
scanf("%d",&a);

printf("Enter second number: \n");
scanf("%d",&b);



if(a>b){
  
  printf("max number is: %d\n",a);
  printf("min number is: %d\n",b);

}
else if(a<b){

    printf("max number is: %d\n",b);
    printf("min number is: %d\n",a);

}
else
{
    printf("both numbers are equal");
}

return 0;
}