/*Write a C program to perform concatenation on 2 strings.
Use pointers to string for strcat() function.*/

// Author Name: Ajay Rajaram Sawant

#include<stdio.h>
#include<string.h>

void mystrcat(char *dest, char *src){

    while(*dest != '\0'){
        dest++;
    }

    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }

        *dest='\0';
}

int main(){
    char str1[100],str2[50];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgest(str2,sizeof(str2),stdin);

    mystring(str1,str2);

    printf("Concatenated string: %s\n",str1);

    return 0;
}