//Program to compute area of circle if radius is positive
#include<stdio.h>
#define pi 3.14
main()
{
    int r;
    float a;
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    if (r>0)
    {
        a = pi*r*r;
        printf("Area of the circle = %f",a);
    }
    else
        printf("Radius is not positive");
}
