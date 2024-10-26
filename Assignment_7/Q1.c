/*Write a function that calculates the area of a circle given its radius using the Real typedef. Print 
the result in main*/

#include<stdio.h>

typedef double real;

    real calculatearea(real radius){
    const real PI=3.14159;
    return PI * radius * radius;
    }

    int main(){

        real radius,area;
        printf("enter the radius: ");
        scanf("%lf",&radius);

        area = calculatearea(radius);

        printf("area of the circle: %.2f\n",area);
        return 0;

    }
