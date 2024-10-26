/**/

#include<stdio.h>
#include<string.h>

struct person{

    char name[50];
    int age;
    float height;
};

int main(){

    struct person person1;

    //Assign values to the member of person1

    strcpy(person1.name,"Ajay Sawant");
    person1.age=24; 
    person1.height=5.6;


    printf("Name: %s\n",person1.name);
    printf("age: %d\n",person1.age);
    printf("height: %1f\n",person1.height);

    return 0;
}