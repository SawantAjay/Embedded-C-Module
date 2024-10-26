/*Write a C program to input a singal character from user also printing it on  screen.
using getchar and putchar function.*/

/*Author Name: Ajay Rajaram Sawant*/

#include <stdio.h>

int main(){

char ch;

printf("Enter a character: "); // input using getchar() function
ch= getchar();

printf("You Entered: ");    // output the character using putchar()
putchar(ch);

printf("\n");

return 0 ;
}