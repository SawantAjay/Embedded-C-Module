/*Write a C program to copy the contents of one file to another.*/

//Author_Name: Ajay Rajaram Sawant

#include<stdio.h>
int main(){

    FILE *srcfile,*destfile;
    char srcfilename[100],destfilename[100];
    char ch;


    printf("Enter the source file name: ");
    scanf("%s",srcfilename);

    //src file open only read mode
    srcfile=fopen(srcfilename,"r");
    if(srcfile==NULL){
        printf("ERROR!! could not open source file %s\n",srcfilename);
        return 1;
    }

    // user for dest file name
    printf("Enter the destination file name: ");
    scanf("%s",destfilename);

    //open the file in write mode
    destfile=fopen(destfilename,"w");
    if(destfile==NULL){
        printf("ERROR !! Could not open destination file:%s\n",destfilename);
        //fclose(srcfile);
        return 1;
    }
    // copy content from src to dest

    while((ch=fgetc(srcfile)) !=EOF){
        fputc(ch,destfile);
    }
    
    //both file close.
    fclose(srcfile);
    fclose(destfile);

    printf("File copied successfully from %s to %s\n",srcfilename,destfilename);
    return 0;
}