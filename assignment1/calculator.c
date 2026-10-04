#include <stdio.h>
#include <math.h>
int main()
{
    double x,y;
    double sum, difference, product;
    double quotient,modulus;
    printf("input the value of x: ");
    scanf("%lf" ,&x);
    printf("input the value of y: ");
    scanf("%lf" ,&y);
    sum = x+y;
    difference = x-y;
    product = x*y;

    printf("x+y = %.2f \nx-y = %.2f \nx*y = %.2f \n" ,sum,difference,product);
    if (y == 0)
    {
        printf("x/y = math error\n");

    }
    else
    {
        quotient = x/y;
        modulus = fmod(x, y);
        printf("x/y = %.2f \nx%%y = %.2f\n" ,quotient,modulus);
    }
    
    return 0;
}