//To compute area of triangle given 3 sides

#include<stdio.h>
#include<math.h>
main()

{
    int a, b, c;
    float s, A;
    printf("Enter the sides of the triangle: a, b and c\n");
    scanf("%d%d%d", &a, &b, &c);

    s = (a+b+c)/2;

    A = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of the triangle with sides %d, %d and %d = %f",a, b, c, A);
}
