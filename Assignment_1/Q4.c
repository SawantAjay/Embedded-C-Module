/*problem: write a C program that demostrates the concept of variable scope by using local and global variables.
shows how changes to a global variable affect the output in diff. function.*/

//Author Name: Ajay Rajaram Sawant

#include<stdio.h>

int a=5;   //global variable

int ajay(){

int b=10;     //local variable 1

printf("local variable outside main function:\n");
printf("value of b: %d\n",b);
printf("value of a: %d\n",a);

}

int main(){

 int c=15;   //local variable 2 in main 

printf("In main function:\n");
printf("value of a: %d\n",a); 
printf("value of c: %d\n",c);

ajay();

return 0 ;
}


