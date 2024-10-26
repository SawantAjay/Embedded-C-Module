/*Define an enum shapetype with values CIRCLE, RECTANGLE, SQUARE, and TRINANGLE. Write a C program that uses switch 
statement to print description for each shape type. for example "circle: A round shape","RECTANGLE: A shape with four
right angles",etc. */

//Author Name: Ajay Rajram Sawant

#include<stdio.h>

enum shapetype{

    CIRCLE,
    RECTANGLE,
    SQUARE,
    TRINAGLE
};

void printshapedescription(enum shapetype shape){

    switch(shape){
        
        case CIRCLE:
        printf("CIRCLE: A circle having round shape\n");
        break;

        case RECTANGLE:
        printf("RECTANGLE: A shape with four right angles\n");
        break;

        case SQUARE:
        printf("SQUARE: A rectangle with equal side.\n");
        break;

        case TRINAGLE:
        printf("TRINAGLE: A shape with three sides\n");
        break;

        default: 
        printf("Unknown shape\n");
        break;
    }
}

int main (){

    
    printshapedescription(CIRCLE);
    printshapedescription(RECTANGLE);
    printshapedescription(SQUARE);
    printshapedescription(TRINAGLE);
   

    return 0;
}