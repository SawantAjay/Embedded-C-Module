/*Write a C program reverse a given integer using a do-while loop. */

//Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){

    int num,reverse=0,remainder;

    printf("Enter a integer: ");
    scanf("%d",&num);

    do{
        remainder= num % 10;     // get the last digit

        reverse= reverse * 10 + remainder;  

        num=num/10;              //remove last digit from num

    }
        while(num!=0);           //continue untill num becomes 0
        

        printf("Reversed number: %d\n",reverse);
        return 0;
}