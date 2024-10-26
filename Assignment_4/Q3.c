/*Write a C program to calculate the average of n integer stored in an array.
the size of the array and element should be provided by the user */

/*Author Name: Ajay Rajaram Sawant*/

#include<stdio.h>

int main(){
int a,i;
float average,sum=0;

printf("Enter the size of array: ");
scanf("%d",&a);

int arr[a];

printf("Enter %d integer:\n",a);

   for(i=0; i<a; i++){

    scanf("%d",&arr[i]);
    sum +=arr[i];

   }

   average= sum/a;  //calculate the average

   printf("sum of elements: %2f\n",sum);
   printf("average of elements: %2f\n",average);

  return 0;
  } 