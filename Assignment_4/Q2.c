/*write a C program to find largest and smallest elements in an array of integer.
the size of array and the elements should be input by user.*/

/*Author Name: Ajay Rajaram Sawant*/

#include <stdio.h>

int main(){
int n,i;

printf("enter the size of array: ");
scanf("%d",&n);

int arr[n];

printf("enter the element of array: ");
  for( int i=0; i<n; i++){
  scanf("%d",&arr[i]);
  }

  int largest=arr[0];
  int smallest=arr[0];

for (int i=1; i<n; i++){

    if(arr[i]>largest){
      largest=arr[i];
}
      if(arr[i]<smallest){
      smallest=arr[i];

      
}

}
   printf("largest element:%d\n ",largest);
   printf("smallest element:%d\n ",smallest);


   return 0;

}