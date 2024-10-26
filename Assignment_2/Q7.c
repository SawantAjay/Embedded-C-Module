/*Write a C program that demonstrates the effect of type casting on arithmetic operation.
The program should perform division with both integer and floating-point types and shows how the result differ.*/

/*Author Name: Ajay Rajaram Sawant*/

#include <stdio.h>

int main(){

int a=10,b=3;
int ans_int;
float ans_float;

ans_int=a/b; //integer division
printf("integer division: %d\n",ans_int);

ans_float=(float)a/b; //floating division
printf("floating point division: %f\n",ans_float);


ans_float=a/b; //after int cast to float 
printf("after integer cast to float: %f\n",ans_float);

ans_float=(float)a/(float)b;  //both operands cast to float
printf("both operands cast to float: %f\n",ans_float);

return 0;  
}