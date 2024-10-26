/*#include<stdio.h>

struct {

    unsigned int a:1;
    unsigned int b:3;
    unsigned int c:4;

}bitfield;

int main(){

    bitfield.a=1;
    bitfield.b=5;
    bitfield.c=15;


    printf("a: %d\n",bitfield.a);
    printf("b: %d\n",bitfield.b);
    printf("c: %d\n",bitfield.c);

    return 0;
}*/

/*#include<stdio.h>

struct{

    unsigned int flag:1;
    unsigned int flag:1;
    unsigned int value:6;
}status;

int main(){

    status.flag1=1;
    status.flag2=0;
    status.value=45;

    printf("flag 1: %d\n",status.flag1);
    printf("flag 2: %d\n",status.flag2);
    printf("value: %d\n",status.value);

    return 0;
}*/

/*#include<stdio.h>

int main(){

    unsigned char flags=0b10101010;

    flags |=(1<<2); //set the second bit

    flags &= ~(1<<4); //clear the fourth bit

    flags ^= (1<<6); //toggle the sixth bit


    printf("flags: 0x%x\n",flags);

    return 0;
}*/


