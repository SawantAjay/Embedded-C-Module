/*Write a C program to access element of an array of 10 elements using arithmetic.*/

// Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int main (){
    int arr[0]; // declare array of 10 elemnets

    int *ptr = arr;  // pointer to an integer
    

    printf("Enter 10 integer:\n");
     
     for(int i=0; i<10; i++){
        scanf("%d",(ptr+i));
     }

     for(int i=0; i<10; i++){

        printf("Element %d = %d\n",i,*(ptr+i));
     }
       

        return 0;

}