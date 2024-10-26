/*Write a C program to reads a string from the user, use pointer the reverse the string in place and prints the original and reversed string.*/

// Author Name: Ajay Rajaram Sawant

#include<stdio.h>
#include<string.h>

// function to reverse a string using pointers

void reversestring(char *str){

    char *start, *end, temp;
    int length = strlen(str);

    //intialize start and end pointers
    start=str;
    end=str + length - 1;


    //swap char. at start and end pointer

    while(start<end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}



int main(){

    char str[100];

    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

   //str[strcspn(str, "\n")] = "\0";

    printf("original string: %s\n",str);

    reversestring(str); 

    printf("reversed string: %s\n",str);
     

     return 0;
}