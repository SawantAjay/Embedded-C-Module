/*Write a C program to find the length of given string without using (strlen) function.
the string be input by user.*/

#include<stdio.h>

int main(){

    char str[50];
    int len=0;

    printf("Enter the string: ");
    fgets(str, sizeof(str),stdin);

    while(str[len] != '\0'){

        if(str[len]=='\n'){

            break;
        }len++;
    }

    printf("you entered: %d\n",len);
    return 0;
}