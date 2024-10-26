//problem: write a c program with static local variable name counter which is count from 1 to 5.
//Author name: Ajay Rajaram Sawant.

#include <stdio.h>

void counter (){

static int counter=0;
counter++;
printf("counter:%d\n",counter);
}


int main()
{

for(int i=0; i<5;i++)
{
counter();
}

return 0;
}

  
