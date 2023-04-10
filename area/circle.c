#include<stdio.h>

int main()
{
    float radius , area;
    const float pi=3.14;

    printf("radius of circle: ");
    scanf("%f", &radius);

    area = pi*radius*radius;
    printf("area of circle is : %f", area);

    return 0;
}