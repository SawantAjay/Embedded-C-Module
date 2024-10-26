/*Write a C program that initialize global and local variable with different values.
print the values to demonstrate how initialization works for each scope.*/

//Author Name: Ajay Rajaram Sawant.

#include<stdio.h>

int globalvar=10;  //global variable declaration and initialization

void demonstratescope(){
    int localvar=20;    ////loaclvar declaration and initialization in demonstratescope function

    printf("Inside demonstrate scope function:\n");
    printf("Global variable: %d\n",globalvar);
    printf("Local variable: %d\n",localvar);

}

int main(){

    int localvar=30;  //loaclvar declaration and initialization in main function

    printf("Inside main function:\n");
    printf("Global variable: %d\n",globalvar);
    printf("Local variable: %d\n",localvar);

    demonstratescope();  // call the function

    return 0;
}