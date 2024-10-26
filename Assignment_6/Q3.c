/*Define a structure circle with member radius(float) and color(string of 20 character).
Write a function updateRadius that takes a pointer to a circle structure and a new
radius value, update the radius of the circle, and then prints the updated radius.*/

//Author Name: Ajay Rajram Sawant

#include<stdio.h>
#include<string.h>

struct circle{

    float radius;
    char color[20];

};

void updateradius(struct circle  *circleptr, float newradius){

    circleptr -> radius= newradius;

    printf("Updated Radius: %2f\n",circleptr -> radius);

}

int main(){

    struct circle mycircle;

    mycircle.radius=4.0;

    strcpy(mycircle.color,"Pink");

    printf("Initial radius: %2f\n",mycircle.radius);

    printf("color is: %s\n",mycircle.color);

    updateradius(&mycircle,15);

    return 0;

}