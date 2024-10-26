/*Write a function that takes a Color and returns a string representing the color. Print the color in 
main based on the favoriteColor value.*/

#include<stdio.h>

typedef enum {
    PINK,
    RED,
    GREEN,
    YELLOW
}color;

const char* getcolorname(color color){
    switch(color){
       
        case PINK:
        return "PINK";
        break;

        case RED:
        return "RED";
        break;

        case GREEN:
        return "GREEN";
        break;

        case YELLOW:
        return "YELLOW";
         break;

        default :
        return "Unknown color";
        break;
    }
}
int main(){

    color favoritecolor=PINK;

    printf("Favorite color is: %s\n",getcolorname(favoritecolor));
    
    return 0;
}