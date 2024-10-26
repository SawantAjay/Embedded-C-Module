/*Write a C program to show the use of gets and puts functions by taking a string from user's end.*/

/*Author Name: Ajay Rajaram Sawant*/

#include<stdio.h>

int main(){

char str[50];

printf("Enter a string: ");
fgets(str, sizeof(str),stdin);

printf("You Entered: ");
puts(str);


 return 0;   
}