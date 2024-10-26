/*Take a number and character from user and print character that number of times using recursion.*/

// Author Name: Ajay Rajaram Sawant

#include<stdio.h>


void printchar(int n,char ch){

    if(n <= 0){
    
    return ;
}

printf("%c\t",ch);

printchar(n-1,ch);

}


int main(){
    
    int number;
    char character;


    printf("Enter a character: ");
    scanf("%c",&character);

    printf("Enter a number: ");
    scanf("%d",&number);


    printchar(number,character);

    return 0;
}
