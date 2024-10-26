/*Write a C program to count the number of characters, words, and lines in a file.*/

//Author_Name: Ajay Rajaram Sawant

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    // Ask for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if file exists
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;  // Count each character

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Check if we are inside a word
        if (isspace(ch)) {
            in_word = 0;  // Word ends if we encounter a space, newline, or tab
        } else if (!in_word) {
            in_word = 1;  // Starting a new word
            words++;
        }
    }

    // Close the file
    fclose(file);

    // Print the counts
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

