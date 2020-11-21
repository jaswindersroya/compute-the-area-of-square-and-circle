#include <stdio.h>
//WAP to calculate area of square and circle;
// formula : area_sequare = s * s;
// area_circle = 3.14 * r * r;
int main(){
    //declare variable
    float s, area_sequare, r, area_circle;
    const float PI = 3.14;
    //user variable input
    printf("\ncalculate area of a sequare : ");
    printf("\n----------------------------------------");
    printf("\nenter the value for side of a sequare : ");
    scanf("%f", &s);
    
    printf("\ncalculate the area of a circle : ");
    printf("\n---------------------------------------");
    printf("\nenter the radius of a circle : ");
    scanf("%f", &r);
    
    //calculations
    //area of a sequare
    area_sequare = s * s;
    area_circle = PI * r * r;
    
    //display output
    printf("\n area of a sequare for given side %f is %f", s, area_sequare);
    printf("\n area of a circle for given radius %f is %f ", r, area_circle);
    
}
