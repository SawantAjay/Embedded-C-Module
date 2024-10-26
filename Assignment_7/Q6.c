/*Define a Bit-Field Structure with fields for low, mid, and high. Set Values for these fields. 
Print Values of low, mid, and high. Combine Fields into a single unsigned int and print its 
hexadecimal representation.*/

#include<stdio.h>

typedef struct{

    unsigned int low :8;
    unsigned int mid: 8;
    unsigned int high: 8;

}bitfield;

int main(){

    bitfield bf;

    bf.low= 0x0B;
    bf.mid= 0x3c;
    bf.high= 0xF;

    printf("low: 0x%02x\n",bf.low);
    printf("mid: 0x%02x\n",bf.mid);
    printf("high:0x%04x\n",bf.high);

    unsigned int combined = (bf.high<<16)|(bf.mid<<8)|bf.low;

    printf("Combined value: 0x%08x\n",combined);

    return 0;
}