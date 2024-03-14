//Program to find sum of digits of a given no.
int SumOfDigit(int N);
#include<stdio.h>
main()
{
    int N;
    int sum;
    printf("Enter a number\n");
    scanf("%d", &N);
    sum = SumOfDigit(N);
    printf("Sum of digits = %d\n", sum);
}

int SumOfDigit (int N)
{
    int sum = 0;
    int r;
    while (N!=0)
    {
        r = N%10;
        sum += r;
        N = N/10;
    }
    return sum;
}
