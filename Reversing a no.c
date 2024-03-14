//Program to reverse a number
#include<stdio.h>
int Reverse(int N);
main()
{
    int num;
    int rev;
    printf("Enter a number\n");
    scanf("%d",&num);
    rev = Reverse(num); //function call
    printf("Reversed number = %d", rev);
}

//function definition
int Reverse(int N)
{
    int rev = 0;
    int digit;
    while(N!=0)
    {
        digit = N%10;
        rev = rev*10 + digit;
        N=N/10;
    }
    return rev;
}

