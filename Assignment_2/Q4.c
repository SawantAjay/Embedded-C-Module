/*write a C program that demonstrates the use of bitwise AND,OR, and XOR operators. 
Initialize two integers and apply these operators to them,then print the result.*/

/*Author Name: Ajay Rajaram sawant*/

#include<stdio.h>
 int main(){
   
   int a=1;
   int b=1,y;

   y= a & b;
   printf("AND operation: %d\n",y);

   y= a | b;
   printf("OR operation: %d\n",y);

   y= a ^ b;
   printf("XOR operation: %d\n",y);

 return 0;
 }