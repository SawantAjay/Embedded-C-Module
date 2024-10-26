/*Write a C program to print the temperature and pressure of a heat chamber on the given console
one by one with efficient memory usage through unions.*/

//Author Name: Ajay Rajram Sawant

#include<stdio.h>

union heatchamber{

    float temperature;
    float pressure;
};

int main(){

    union heatchamber chamber;

    printf("Enter chamber temp.(in degree celsius): ");
    scanf("%f",&chamber.temperature);
    printf("Temperature: %fC\n",chamber.temperature);

    printf("Enter the pressure of the heat chamber: ");
    scanf("%f",&chamber.pressure);
    
    printf("Pressure: %.f\n",chamber.pressure);
    
    return 0;
}