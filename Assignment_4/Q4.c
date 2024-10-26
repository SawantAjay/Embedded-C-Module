/*Write a C program to reverse the elements an array. the size of array and the elements should be provided by the user.*/

/*Author Name: Ajay Rajaram Sawant*/

#include<stdio.h>

int main(){

    int a,i;

    printf("Enter the size of array:");
    scanf("%d",&a);

    int arr[a];
    printf("Enter %d integer: ",a);

    for(i=0;i<a;i++){

        scanf("%d",&arr[i]);
    }
    //reverse the size of array
     
     printf("reversed array:\n");
     for(i=a-1; i>=0; i--){
     printf("%d\t",arr[i]);
     
     }

     printf("\n");
     return 0;
     
}