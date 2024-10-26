/*Define a structure person with members name (string of 50 character) and age (integer).
Write a program to initialize a person structure with your own details and then print the
name and age of the person.*/

//Author Name: Ajay Rajram Sawant

#include<stdio.h>
#include<string.h>

struct person {

    char str[50];
    int age;
};

int main(){

    struct person mydetails;

    strcpy(mydetails.str,"Ajay Sawant");
    mydetails.age=24;

    printf("My Name is: %s\n",mydetails.str);
    printf("My Age is: %d\n",mydetails.age);
   
    return 0;
}