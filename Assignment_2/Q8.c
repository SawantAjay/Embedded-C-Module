/*Write a C program that demonstrates the order of evalution in expression with operators.
Use parentheses to show how operator precendence the result.*/

/*Author Name: Ajay Rajaram Sawant*/


#include <stdio.h>

int main(){

int a=2, b=4,c=6,x;

x=(a+b)*c;

//using parentheses 

printf("using parentheses the result is: %d\n",x);

//without using parentheses 

x=a*b+c;

printf("without using parentheses the result is: %d\n",x);

return 0;  
}