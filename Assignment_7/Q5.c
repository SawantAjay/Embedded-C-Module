/*Write a C code to check if bit2 and bit3 are both set. Print whether they are both set or not.*/

#include<stdio.h>

int unsigned bitset(unsigned int num){

    unsigned int mask= (1<<2)|(1<<3);  //binary 00001100 decimal-12

    return (num & mask)==mask;
}

int main(){

    unsigned int num;

    printf("Enter an integer: ");
    scanf("%u",&num);

    if(bitset(num)){
        printf("Both bit 2 and 3 are set.\n");
    }
    else{
        printf("Both bit 2 and 3 are not set.\n");
        }

        return 0;
}