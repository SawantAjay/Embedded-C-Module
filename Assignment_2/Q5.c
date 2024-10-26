/*write a C program uses unary operators to increment and decrement a variable .
Initialize a variable,use pre-increment and post-increment,and print the result.*/
/*Author Name: Ajay Rajaram Sawant*/

#include<stdio.h>

int main(){

int a=5;

//post increment
printf("initial value: %d\n",a);
printf("increment the value of a:%d\n",a++);
printf("after post-increment used: %d\n",a);


//post decrement
int b=10;
printf("Initial value: %d\n",b);
b=--b;
printf("after used post decrement: %d\n",b);


//pre increment 
int c=15;
printf("Initial value: %d\n",c);
c=++c;
printf("after used pre-increment: %d\n",c);


//pre decrement
int d=20;
printf("Initial value: %d\n",d);
d=--d;
printf("after used pre-decrement: %d\n",d);

return 0;
}