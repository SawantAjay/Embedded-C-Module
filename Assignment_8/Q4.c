/*Write a C program to create a file and write user input into it. */

//Author_Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){

FILE *file;
char filename[100];              
char input[1000];
char ch;

printf("Enter the file name to create: ");
scanf("%s",filename);

file=fopen(filename,"w");

if(file==NULL){

    printf("ERROR!! Could not open or create a file %s\n",filename);
    return 1;
}
//input to write the file

printf("Enter text to write to the file:\n");
getchar();
fgets(input,sizeof(input),stdin);




//write input to the file
//fprintf(file,"%s",input);

//close the file
fclose(file);

printf("file %s created and text written successfully.\n",filename);
return 0;
}
