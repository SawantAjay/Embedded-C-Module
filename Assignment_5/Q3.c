/*Write a C program to calculate power of given base and index(power=base^index).*/

// Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int power(int base,int index){

    int result = 1;

    for(int i=0; i<index ; i++){

        result *= base;
    }

        return result;
}

int main(){

    int base,index;

    printf("Enter Base: ");
    scanf("%d",&base);

    printf("Enter index(exponent): ");
    scanf("%d",&index);

    int result = power(base,index);

    printf("%d is raised to the power of %d is:%d\n",base,index,result );

    return 0;
}