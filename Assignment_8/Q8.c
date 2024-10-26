/*Write a C program to merge the contents of multiple text files into a single file*/

#include <stdio.h>
//#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;
    int num, i;

    // Get the destination file name
    printf("Enter the destination filename: ");
    scanf("%s", destFilename);

    // Open the destination file in write mode
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file %s for writing.\n", destFilename);
        return 1;
    }

    // Get the number of source files
    printf("Enter the number of source files: ");
    scanf("%d", &num);

    // Loop through each source file
    for (i = 0; i < num; i++) {
        printf("Enter the name of source file %d: ", i + 1);
        scanf("%s", sourceFilename);

        // Open the source file in read mode
        sourceFile = fopen(sourceFilename, "r");
        if (sourceFile == NULL) {
            printf("Error: Could not open source file %s for reading.\n", sourceFilename);
            fclose(destFile);
            return 1;
        }

        // Copy the contents of the source file to the destination file
        while ((ch = fgetc(sourceFile)) != EOF) {
            fputc(ch, destFile);
        }

        // Close the source file
        fclose(sourceFile);
    }

    // Close the destination file
    fclose(destFile);

    printf("Files merged successfully into %s\n", destFilename);

    return 0;
}
