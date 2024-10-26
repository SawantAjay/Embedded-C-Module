/*Write a C program that prints right-angled triangle pattern of stars(*) with n rows +
using nested for loop. the number of rows should be provided by the user.*/

//Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){

    int n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){

            printf("*");
        }

        printf("\n");
    }
    return 0;
}