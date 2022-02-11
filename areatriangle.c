/* areaTriangle.c
create => narawich
*/
#include <stdio.h>

int main()
{
    int base, height ;
    float area; 

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter Height: ");
    scanf("%d", &height);

    area = 0.5 * base * height;
    printf("Area = %.2f", area);
    return 0;
}
