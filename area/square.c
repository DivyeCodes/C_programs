#include <stdio.h>

int main()

{
    float side , area;
    printf("side of square is :");
    scanf("%f", &side);

    area = side*side;
    printf("Area of square is: %.3f " ,area );

    return 0;


}