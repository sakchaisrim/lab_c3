// Calculate area of a circle
#include <stdio.h>
#define PI 3.14159

void main(){
    system("cls");
    float radius, area;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area of Circle is %7.2f", area);
}