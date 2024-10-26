/*Write a C program that defines an enum operation with values ADD,SUBSTRACT,MULTIPLY and, DIVIDE. Write a function performOperation
that takes two integer and an operation enum value,perform the corresponding operation, and returns the result. Demonstrate this
function in your main function. Take two integer values from user.*/

//Author Name: Ajay Rajram Sawant

#include<stdio.h>

enum operation { ADD,SUBSTRACT,MULTIPLY,DIVIDE };

int performop(int a,int b ,enum operation op){

    switch(op){

        case ADD :
        return a+b;
        

        case SUBSTRACT :
        return a-b;
        break;

        case MULTIPLY :
        return a*b;
        break;

        case DIVIDE :
        if(b!=0){
            return a/b;
            break;

        }
        else{
            printf("can't division by zero\n");
            return 0;
        }
        default:{
            printf("\tchoose correct operator(1-4)\n");
            return 0;
        }
    }

}

int main(){

    int num1,num2,result;
    int choice;
    enum operation op;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);
    
    printf("Enter your choice:\n");
    printf(" \t0=ADDITION\n \t1=SUBSTRACTION\n \t2=MULTIPLICATION\n \t3=DIVISION \n");
    scanf("%d",&choice); 

    if(choice>=0 && choice<=3){
        op=(enum operation) choice;
    }

    result=performop(num1,num2,op); //calling function to performop

     switch (op){
        case ADD:
        printf("\tyou choose addition: %d + %d = %d\n",num1,num2,result);
        break;

        case SUBSTRACT:
        printf("\tyou choose substraction: %d - %d = %d\n",num1,num2,result);
        break;

        case MULTIPLY:
        printf("\tyou choose multiplication: %d * %d = %d\n",num1,num2,result);
        break;

        case DIVIDE:
        if(num2!=0){
        printf("\tyou choose division: %d / %d = %d\n",num1,num2,result);
        break;  
     }
     else{
        printf("\tERROR: choose correct operator(1-4)");
     }

     }
        return 0;
}