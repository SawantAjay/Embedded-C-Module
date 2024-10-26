/*Write a C program to get a string from user through keyboard using getchar function.*/


// Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){

    char str[100];
    int i=0;
    char ch;

    printf("Enter a string: ");

    while((ch= getchar()) != '\n' && i < sizeof(str)-1){
        str[i]=ch;
        i++;

    }

    str[i]='\0';
    printf("You Entered: %s\n",str);

    return 0;
}
