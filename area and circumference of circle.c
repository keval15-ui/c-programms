#include <stdio.h>
#include <math.h> 

int main() {
    double radius;
    double circumference, area;

   
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);


    circumference = 2 * M_PI * radius;
    area = M_PI * radius * radius;

    
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}
