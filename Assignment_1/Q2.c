//problem: Intialise and assign integer values to 2 variables named x and y.write a C code to swap their values without using any other variables.print the values before and after swapping.

//author name: Ajay Rajaram Sawant.


#include <stdio.h>

int main(){

int x,y;

//take value for a and b
printf("Enter value for x: ");
scanf("%d",&x);

printf("Enter value for y: ");
scanf("%d",&y);

//before swap
printf("Before swapping:\n ");
printf("x=%d\t",x);
printf("y=%d\t",y);

//after swap
printf("\nAfter swapping:\n ");
printf("x=%d\t",y);
printf("y=%d\t",x);

return 0;
}  