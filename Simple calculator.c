//Simple calculator

#include<stdio.h>
#include<math.h>
main()

{
    int x,y;
    int c;
    int a,s,m;
    float d;

    printf("Enter your choice to perform simple operations:\n Press 1 for Addition\n Press 2 for Subtraction\n Press 3 for Multiplication\n Press 4 for Division\n");
    scanf("%d",&c);

    printf("Enter two numbers x and y\n");
    scanf("%d%d", &x, &y);

    if (c==1)
    {
        a = x + y;
        printf("Sum of %d and %d = %d", x, y, a);
    }

    else if (c==2)
    {
        s = x - y;
        printf("%d subtracted from %d = %d", y, x, s);
    }

    else if (c==3)
    {
        m = x * y;
        printf("Product of %d and %d = %d", x, y, m);
    }

    else if (c==4)
    {
        if (y==0)
        {
            printf("Division by 0 not possible");
        }
        else
        {
            d = x / y;
        printf("Division of %d by %d = %d", x, y, s);
        }
    }

    else
    {
        printf("Enter any one among the given 4 options");
    }
}
