//Program to find total surface area and volume of cylinder

#include<stdio.h>
#define pi 3.142
main()
{
    int r, h;
    float TSA, Vol;

    printf("Enter the radius and height of the cylinder\n");
    scanf("%d%d", &r, &h);

    TSA = 2*pi*r*(r+h);
    printf("Total surface area of the cylinder = %f\n", TSA);

    Vol = pi*r*r*h;
    printf("Volume of the cylinder = %f", Vol);
}
