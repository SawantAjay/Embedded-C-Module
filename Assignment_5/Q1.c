/*Take a numbers from users and print character that number of times using while loop*/

// Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){

int number;
char character;

printf("Enter the number: ");
scanf("%d",&number);

printf("Enter a character: ");
scanf(" %c",&character);

int i=0;
while(i<number){
    printf("%c\t",character);
    i++;
    }

    return 0;
}