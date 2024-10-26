/*Write a C program that calculates the maximum of three numbers using the conditional(ternary)operator.
the program should handle cases where the numbers are equal.*/
/*Author Name: Ajay Rajaram Sawant*/

#include<stdio.h>

int main(){
 
int a,b,c,max;

printf("Enter any three numbers: ");
scanf("%d\n%d\n%d\n",&a,&b,&c);

max=(a>b)?((a>c)? a:c)



if(a>b && a>c)
{
    max=a;
}

else if (b>a && b>=c)
{
    max=b;
}
else {
    max=c;
}
return 0;   

}
