/*take a number and character from user and print character that number of times using recursion.*/

#include<stdio.h>

void print(int num, char ch){

    if(num<0){
        return;
    }

    printf("%c\t", ch);
    print(num-1, ch);

}
int main(){
    int number;
    char character;

    printf("Enter a number: ");
    scanf("%d",&number);

    printf("Enter a character: ");
    getchar();
    scanf("%c",&character);


    if(number<0){
        printf("please enter non-negative integer");
        return 1;
        }

        print(number,character);
      
        return 0;
}