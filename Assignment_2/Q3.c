/*write a C program that Initializes a variable x to 10. use compound assignment operator to 
increment x by 5
decrement x by 2
multiply x by 3 and 
divide x by 4.
print the final value of x. */

/*Author Name: Ajay Rajaram Sawant*/

#include <stdio.h>

int main(){

int x=10;

x += 5;

x -= 2;

x *= 3;

x /= 4;


printf("final value of X: %d\n",x);
return 0;
}