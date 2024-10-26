/*Write a C program that defines an enum operation with values ADD, SUBSTRACT, MULTIPLY, and DIVIDE. write a function perform 
operation that takes two integer and an operation enum value, performs the corresponding operation and returns the result.
Demonstrate this function in your main function. */

//Author Name: Ajay Rajram Sawant

#include<stdio.h>

 enum  operation{
    ADD,SUBSTRACT,MULTIPLY,DIVIDE
};

int printoperation(int a,int b, enum operation op){

    switch(op){
        case ADD:
        return a+b;
        break;
        
        case SUBSTRACT:
        return a-b;
        break;

        case MULTIPLY:
        return a*b;
        break;

        case DIVIDE:
        if(b !=0)
            return a/b;

            else{
                printf("ERROR: DIVISION BY ZERO\n");
                break;
            }
        default:
        printf("ERROR: INVALID OPERATION");
        break;
        return 0;
    }
}

int main(){
   int a=5,b=5,c;
   enum operation op;

   op=ADD;
   c=printoperation(a,b,op);
   printf("ADDITION: %d + %d = %d\n",a,b,c);

   op=SUBSTRACT;
   c=printoperation(a,b,op);
   printf("SUBSTRACTION: %d - %d = %d\n",a,b,c); 
   
   op=MULTIPLY;
   c=printoperation(a,b,op);
   printf("MULTIPLICATION: %d * %d = %d\n",a,b,c);

   op=DIVIDE;
   c=printoperation(a,b,op);
   printf("DIVISION: %d / %d = %d\n",a,b,c);

    return 0;
}