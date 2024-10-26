/*Write a C program to append text to an existing file.*/

//Author_Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){

    FILE *file;
    char filename[100];
    char input[1000];

    printf("Enter the file name to append to: ");
    scanf("%s",filename);

    file=fopen(filename,"a");

    if(file==NULL){
        printf("ERROR!! could not open file %s for appending.\n");
        return 1;
    }

    printf("Enter a text append to the file: ");
    getchar();
    fgets(input,sizeof(input),stdin);

    fprintf(file,"%s",input);

    fclose(file);
    printf("Text appended to the file %s successfully.\n",filename);
    return 0;
}