//problem: write a c program to print table of a number enter by the user.
//Author name: Ajay Rajaram Sawant.


#include <stdio.h>

int main(){

int num;

//take a number from user
printf("Enter a table number: ");
scanf("%d",&num);

//printf("value of:\n ")

for(int i=1; i<=10; i++)
{

printf("%d*%d=%d\n",num,i,num*i);

}
return 0; 
}
