/*//Modular code to exchange two variables
#include<stdio.h>
int val(int, int, int);
main()
{
    int a, b, c;
    printf("Enter values of two numbers:\n");
    scanf("%d%d", &a, &b);
    val(a,b,c);
    printf("Now the value a = %d \n b = %d", b, a );
}

int val(int a, int b, int c)
{
    a = c;
    a = b;
    b = c;
    return;
}*/

#include<stdio.h>
main()
{
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    for (i<a)
        printf("%d",i);
}
