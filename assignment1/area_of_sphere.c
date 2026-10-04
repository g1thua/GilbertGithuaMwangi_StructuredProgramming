#include <stdio.h>

int main()
{
    double radius, surface_area;
    double pi = 3.142;
    printf("what is the radius of the sphere? ");
    scanf("%lf" ,&radius);
    surface_area = 4*pi*radius*radius;
    printf("the surface area is %.3f\n" ,surface_area);

    return 0;

}