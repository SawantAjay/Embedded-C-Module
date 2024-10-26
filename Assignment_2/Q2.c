/*write a C program for a calculator with basic operation*/
/*Author Name: Ajay Rajaram Sawant*/

#include<stdio.h>

int main (){

char ope;
int a,b,y;


printf("Enter a ope: (+,-,*,/)",ope);
scanf("%c",&ope);

printf("Enter two numbers:  ",a,b);
scanf("%d%d",&a,&b);

switch(ope){

  case '+':
  y= a + b;
  printf("sum: %d\n",y);
  break; 


  case '-':
  y= a - b;
  printf("sub: %d\n",y);
  break;

  case '*':
  y= a * b;
  printf("mul: %d\n",y);
  break;

  case '/':
  if(b!=0){
     
    y= a/b;

    printf("div: %d\n",y);
    break;
  }
  else
  {
    printf("value can't div by 0\n");
    break;
  }

  default :{
    printf("use correct operator\n");
    break;
  }

}

return 0; 
}