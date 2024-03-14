//Program to find if a given no. is a palindrome or not
#include<stdio.h>
int Reverse(int N);
main()
{
    int num;
    int rev;
    printf("Enter a number\n");
    scanf("%d",&num);
    rev = Reverse(num); //function call
    printf("Reversed number = %d\n", rev);
    if (num == rev)
        printf("The no. %d is a palindrome",num);
    else
        printf("The no. %d is not a palindrome", num);

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

