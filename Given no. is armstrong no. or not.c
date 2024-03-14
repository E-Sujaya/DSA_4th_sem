//Program to find if a given no. is an armstrong no. or not
int SumOfDigit(int N);
#include<stdio.h>
#include<math.h>
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
    int sum = 0,a = 0;
    int r,b,n,c,i;
    N = n;
    do
    {
        a = n%10;
        c = n/10;
        i++;
    }
    while (n!=0);
    printf("%d\n",i);

    while (N!=0)
    {
        r = N%10;
        b = pow(r,i);
        sum += b;
        N = N/10;
    }
    return sum;
}
