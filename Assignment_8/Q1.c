/*Write a C Program to define a macro "area" to calculate area of circle after providing radius by user.*/

//Author_Name: Ajay Rajaram Sawant

#include<stdio.h>

#define PI 3.14159
#define AREA(r)(PI*(r)*(r))

int main(){

float radius,area;

printf("Enter the radius of circle: ");
scanf("%f",&radius);

area= AREA(radius);

printf("The area of circle is: %f\n",area);

return 0;
}