//Program to read and display only elements of principle diagonal
#include<stdio.h>
#include<stdlib.h>
#define max 10
void display(int a[max][max],int m,int n);
void read(int a[max][max],int m,int n);
//void diagonal(int a[max][max],int m,int n);
int main()
{
    int a[max][max],s;
    int m,n;
    printf("Enter the value of m and n");
    scanf("%d%d",&m,&n);
    if(m<0||n<0||n>max||m>max)
    {
        printf("Invalid input");
        exit(0);
    }
    read(a,m,n);
    display(a,m,n);
    printf("%d",a[0][0]);
    //diagonal(a,m,n);
    return 0;
}
void read(int a[max][max],int m,int n)
{
    int i,j;
    printf("\n Enter the elements") ;
        for( i=0;i<m;i++)
        {
            for( j=0;j<n;j++)
            {

                scanf("%d",&a[i][j]);
            }
        }
}
void display(int a[max][max],int m,int n)
{
    int i,j;
    printf("\n Matrix:");
        for(i=0;i<m;i++)
    {
        printf("\n");
        for( j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
}
//void diagonal(int a[max][max],int m,int n)
//{
//    int i,sum=0,j;
//    for( i=0;i<n;i++)
//    {
//        printf("\n");
//        for( j=0;j<m;j++)
//        {
//            if(i==j) // if(i+j == n-1) => for secondary diagonal
//                printf("%d\t",a[i][j]);
//        }
//    }
//}
