/*Define a structure named Rectangle that includes two members : length and width,both of type float.
Write a function printRectangle that takes a rectangle structure as an argument and prints its length and width.*/

//Author Name: Ajay Rajram Sawant

#include<stdio.h>

struct rectangle{

    float length;
    float width;

};

void printrectangle(struct rectangle rect){

    printf("Length: %2f\n",rect.length);
    printf("Width: %2f\n",rect.width);
}

int main(){

    struct rectangle myrect= {10.2, 4.2};

    printrectangle(myrect);

    return 0;
}