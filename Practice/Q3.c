/*Write a C program to calculate power of given base and index.*/

#include<stdio.h>

int power(int base,int index){

    int result=1;

    while(index>0){
        result *= base;
        index--;
      
    }
    return result;
}

int main(){

    int base,index;

    printf("Enter base value: ");
    scanf("%d",&base);

    printf("Enter index value: ");
    scanf("%d",&index);

    if(index<0){
        printf("please enter positive exponent value\n");
        return 1;
    }

    int result=power(base,index);

    printf("%d^%d=%d\n",base,index,result);
    return 0;
}