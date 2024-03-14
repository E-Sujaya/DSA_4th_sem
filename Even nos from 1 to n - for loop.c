//Program to print even nos. from 1 to n
void EvenCheck(int N);

#include<stdio.h>
main()
{
    int N;
    printf("Enter value for N\n");
    scanf("%d", &N);
    EvenCheck(N);
}
void EvenCheck(int N)
{
    int i;
    int eveCount = 0;
    for (i = 1; i<=N; i++)  //initialization
    {
        if (i%2 == 0)
        {
            printf("%d\t",i);
            eveCount++;
        }//body of loop
    }//end of for
}
