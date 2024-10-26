/*Define union named vehical that can store either the number of wheels(int), the 
engine capacity (float), or the vehical type (char[20]).Write a program to demonstrate 
how to use this union to store and print all three types of data.*/

//Author Name: Ajay Rajram Sawant

#include<stdio.h>
#include<string.h>

typedef union{
    int wheels;
    float enginecapacity;
    char* vehicaltype[20];
}vehical;

int main(){

    vehical v;

    printf("Enter number of wheels: ");
    scanf("%d",&v.wheels);
     printf("wheels (after stored): %d\n",v.wheels);

    printf("Enter Engine capacity: ");
    scanf("%f",&v.enginecapacity);
    printf("Engine capacity(after stored): %.1f\n",v.enginecapacity);
 
 
    while(getchar() !='\n');
    
    printf("Enter type of vehical: ");
    fgets(v.vehicaltype, sizeof(v.vehicaltype), stdin);
    printf("vehical type (after stored): %s\n",v.vehicaltype);
    return 0;
}