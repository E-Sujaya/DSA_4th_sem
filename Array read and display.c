#include<stdio.h>
void Read(int A[], int N);
void Display(int A[], int N);
void Sum(int A[], int N);
void Search(int A[], int N);
main()
{
    int N;
    int A[5];
    printf("Enter the size of array: \n");
    scanf("%d",&N);
    Read(A,N);
    Display(A,N);
    Search(A,N);
    Sum(A,N);
}

void Read(int A[5], int N)
{
    int i;
    for(i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }
}

void Display(int A[5], int N)
{
    int i;
    for(i=0; i<N; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");
}

void Search(int A[5], int N)
{
    int f,i;
    printf("Enter the element to be searched: \n");
    scanf("%d", &f);
    for(i=0; i<N; i++)
    {
        if (f == A[i])
        {
            printf("Element %d found in array", f);
            break;
        }

        else
        {
            printf("Element %d not found in array", f);
        }
        break;
    }
}

void Sum(int A[5], int N)
{
    int i,s = 0;
    for(i=0; i<N; i++)
    {
        s = s + A[i];
    }
    printf("\nSum = %d\n",s);
}
