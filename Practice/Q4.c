/*Write a C program to get a string from user through keyboard using getchar function.*/

#include<stdio.h>
#define max_length 50

int main(){

    char str[50];
    int index=0;
    char ch;

    printf("Enter a string: ");

    while((ch = getchar())!='\n' && index<=49){
          
         str[index++]=ch;
}

    str[index]='\0'; //null terminated the string
         
         printf("You entered: ******%s*****%s\n",str);

         return 0;
    }
