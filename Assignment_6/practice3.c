#include<stdio.h>

union Data{

    int i;
    float f;
    char str[20];
};

int main(){

    union Data data;
    data.i=50;

    printf("data: %d\n",data.i);

    data.f=520.5;
    printf("data float: %2f\n",data.f);

    printf("data.str: %s\n","AJAY SAWANT");

    return 0;

}