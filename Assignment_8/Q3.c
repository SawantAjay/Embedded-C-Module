/*Write a C program to read contents of a file and display it on the screen.*/

//Author_Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){

    FILE *file;
    char filename[100];
    char ch;

    printf("Enter the filename to open:\n");
    scanf("%s",filename);

    file=fopen(filename,"r");

    if(file==NULL){

        printf("ERROR!! could not open file %s\n",filename);
        return 1;
    }

    printf("\nContents of file: %s\n\n",filename);
    while((ch=fgetc(file)) !=EOF){
        putchar(ch);
    }
    fclose(file);
    return 0;
}