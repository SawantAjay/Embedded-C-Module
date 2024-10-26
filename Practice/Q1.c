/*Take a number and character from user and print character that number of times using while loop*/


#include<stdio.h>


int main(){
    
    int num;
    char character;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Enter a character: ");
    getchar();
    scanf("%c",&character);

    if(num<0){

        printf("please enter non-negative number");
        return 1;
    }

    int count=0;
    while(count<num){

        printf("%c",character);
        count++;
        printf("\n");
    
    }
    return 0;
}
