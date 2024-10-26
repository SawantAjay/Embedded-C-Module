/*Write a C program to get a person height and weight and calculate their BMI.*/

/*Author Name: Ajay Rajaram Sawant*/

#include<stdio.h>

int main(){
    float height,weight,bmi;

    printf("Enter your height: ");
    scanf("%f",&height);

    printf("Enter your weight: ");
    scanf("%f",&weight);

    //calculate bmi
    bmi= weight/ (height * height);

    printf("your BMI: %.2f\n",bmi);

    return 0;
}