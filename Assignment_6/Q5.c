/*Write a C program to take information from user using strucutre like roll number,
name ,standard and percentage.and print them as well.*/

//Author Name: Ajay Rajram Sawant

#include<stdio.h>

struct information{
     
     int rollnumber;
     char name[50];
     int standard;
     float percentage;

};
    //input student detail from user
void inputstudentdetails(struct information* information){

    printf("Enter roll number: ");
    scanf("%d",&information -> rollnumber);

    printf("Enter your name: ");
    scanf("%s",&information -> name);

    printf("Enter your standard: ");
    scanf("%d",&information -> standard);

    printf("Enter your percentage: ");
    scanf("%f",&information -> percentage);

}
   //print student details
void printstudentdetails(struct information information){

        printf("\n....student details....\n");
        printf("Roll number: %d\n",information.rollnumber);
        printf("Name: %s\n",information.name);
        printf("standard: %d\n",information.standard);
        printf("percentage: %f\n",information.percentage);

}
int main(){

    struct information information;

    inputstudentdetails(&information);
    printstudentdetails(information);

    return 0;
}
