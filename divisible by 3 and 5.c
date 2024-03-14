//Program to read a no. and whether the no. is divisible be 3 and 5
#include<stdio.h>
main()
{
    int n;
    printf("Enter any no.\n");
    scanf("%d",&n);
    if (n%3==0 && n%5==0)
        printf("%d is divisible by both 3 and 5", n);
    else
        printf("%d is not divisible by both 3 and 5", n);
}
