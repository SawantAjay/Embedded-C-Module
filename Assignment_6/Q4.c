/*Define a structure course with members courseName (string of 100 characters)and 
credits(integer).Define another structure student with name (string of 50 character),
age (integer),and an array of course structure. Write a function to prints the details 
of a student including all the courses they are enrolled in.*/

//Author Name: Ajay Rajram Sawant

#include<stdio.h>

struct course{

    char courseName[100];
    int credits;
};

struct student{

    char name[50];
    int age;
    struct Courses [5];
    int numcourses;
};

void studentdetails(struct student student){

    printf("student name: %s\n",student.name);
    printf("age: %d\n",student.age);

    printf("courses enrolled:\n");
    for(int i=0; i<student.numcourses; i++){

        printf("Courses %d: %s (credits: %d)\n",i+1,student.courses[i].coursesname.student.courses[i].credits);

    }
}
int main(){

    struct student student;

    printf("Enter student name: ");
    fgets(student.name,sizeof(student.name),stdin);

    printf("Enter student's age: ");
    scanf("%d",&student.age);

    //enter number of coureses the student enrolled in

    print("enter number of coureses the student enrolled in max[5]: ");
    scanf("%d",&student.numcourses);

    //input course detail

    for(int i=0; i<student.numcourses; i++){
        getchar();
        printf("Enter name of course %d: ",i+1);

        fgets(student.courses[i].course.name,sizeof(student.courses[i].coursename),stdin);

        printf("Enter credits for course %d: ",i+1);
        scanf("%d",&student.courses[i].credits);

    }

    //print student details with courses
    printstudent(student);

    return 0;
}