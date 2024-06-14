#include <stdio.h>

#define PI 3.14159

void calculateAreaAndPerimeter(float radius, float *area, float *perimeter) {
    *area = PI * radius * radius;
    *perimeter = 2 * PI * radius;
}

int main() {
    float radius, area, perimeter;


    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);


    calculateAreaAndPerimeter(radius, &area, &perimeter);


    printf("Area of the circle: %.2f square units\n", area);
    printf("Perimeter of the circle: %.2f units\n", perimeter);

    return 0;
}

