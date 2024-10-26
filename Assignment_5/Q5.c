/*Write a C program to swap two integer variables using functions.*/

// Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int swap(int a,int b){

    int z = a;
        a = b;
        b = z;

            //after swapping
    printf("after swapping: x=%d, y=%d\n",a,b);
}

int main(){

    int x , y;

    printf("Enter first number: ");
    scanf("%d",&x);

     printf("Enter second number: ");
    scanf("%d",&y);

    //before swapping 
    printf("before swapping: x=%d, y=%d\n",x,y);
    
    swap(x, y);


    return 0;
}

