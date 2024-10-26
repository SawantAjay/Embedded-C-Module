/*Take a month number from user and print how many days are there in that month by using switch statement.*/

//Author Name: Ajay Rajaram Sawant

#include <stdio.h>

int main(){

    int month;
    
    printf("Enter month number(1-12): ");
    scanf("%d",&month);

    switch(month){

        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31 days\n");
        break;

        case 4: case 6: case 9: case 11:
        printf("30 days\n");
        break;

        case 2: 
        printf("28 or 29 days in month depending on leap year\n");
        break;



            printf("ERROR!!! please enter valid month number(1-12)");
        }
   
        return 0;
    



    return 0;
}