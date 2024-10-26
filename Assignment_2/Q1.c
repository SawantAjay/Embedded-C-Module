/*write a C program that demostrate the difference between pre-increment(++x) and post-increment (x++) operator.
print the values before and after each operation.*/

/*Author Name: Ajay Rajaram Sawant*/

#include <stdio.h>

int main(){

int a=20;

printf("Initial value: %d\n",a);
printf("using post-increment a++: %d\n",a++);
printf("value after post-increment: %d\n",a);

int x=50;
printf("Initial value: %d\n",x);
printf("using pre-increment ++x: %d\n",++x);
printf("value after pre-increment: %d\n",x);

return 0;
}