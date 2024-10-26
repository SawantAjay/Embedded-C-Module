// write a C program with int,float,double and character data types and the print the size of these data types.
//Author Name: Ajay Rajaram Sawant.

#include <stdio.h>

int main(){

int a=10;
float f=10.5;
char c='A';
double d=500.000;

//Now print the sizeof above data types.

printf("the size of interger:  %d bytes\n", sizeof(a));
printf("the size of float:     %d bytes\n", sizeof(f));
printf("the size of character: %d bytes\n", sizeof(c));
printf("the size of double:    %d bytes\n", sizeof(d));

return 0;
}
