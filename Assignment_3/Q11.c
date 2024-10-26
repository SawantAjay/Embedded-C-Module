/*Write a menu driven program to perform basic arithmatic operations.
menu options- 0 to Exit, 1 to ADD, 2 to SUBTRACT, 3  to MULTIPLY, 4 to DIVIDE.*
Depending upon the choice entered by user the arithmetic operations should be performed and continue till user wants.*/

//Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int main(){
    int choice;
    float num1,num2,result;

    //menu driven options 

    do{
        printf("\n***Menu***\n");
        printf("0.Exit\n");
        printf("1.Addition\n");
        printf("2.Substraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);


        switch(choice){

        case 0:
        printf("Exiting the menu\n");
        break;

        case 1:
        printf("Enter any two numbers:");
        scanf("%f %f",&num1,&num2);
        result=num1 + num2;
        printf("Result:%.2f\n",result);
        break;

        case 2:
        printf("Enter any two numbers:");
        scanf("%f %f",&num1,&num2);
        result=num1 - num2;
        printf("Result:%.2f\n",result);
        break;

        case 3:
        printf("Enter any two numbers:");
        scanf("%f %f",&num1,&num2);
        result=num1 * num2;
        printf("Result:%.2f\n",result);
        break;

        case 4:
        printf("Enter any two numbers:");
        scanf("%f %f",&num1,&num2);
        if(num2!=0){
        result=num1 / num2;
        printf("Result: %.2f\n",result);
        }else{
        printf("can't division by zero");
        }

        default:{
        printf("Invalid choice!!! choose correct choice.");
        }

        }
    
        }
        while(choice !=0);
        return 0;
        }