#include <stdio.h>

void calculateAreaAndPerimeter(float length,float breadth, float *area, float *perimeter,float side,float *area1, float *perimeter1)

{
   *area = length*breadth;
    *perimeter = 2 * (length + breadth);
    *area1 =side*side;
    *perimeter1 = 4 * side;
}

int main()
{
    float length,breadth,area, perimeter ,side, area1, perimeter1;


    printf("Enter length and breadth of rectangle: ");
    scanf("%f%f", &length,&breadth);
    printf("Enter the side of square ");
    scanf("%f", &side);


    calculateAreaAndPerimeter(length,breadth, &area, &perimeter,side, &area1, &perimeter1);


    printf("Area of the rectangle: %.2f square units\n", area);
    printf("Perimeter of the rectangle: %.2f units\n", perimeter);
    printf("Area of the square: %.2f square units\n", area1);
    printf("Perimeter of the square: %.2f units\n", perimeter1);
return 1;
}
