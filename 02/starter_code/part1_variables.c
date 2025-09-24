// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14

int main(void) {
    // 1. Declare the variables
    double radius;
    // double pi;
    double area;

    printf("Enter  radius: ");
    
    // 2. Initalise the variables
    scanf("%lf", &radius);
    // pi = 3.14;
    
    // 3. Calculate the area of the circle
    area = PI * (radius * radius);
    
    // 4. Print the result
    printf("The area is %.1lf\n", area);    

    return 0;
}
