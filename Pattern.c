#include <stdio.h>
#include <ctype.h>

int main()
{
    char alpha1, alpha2;
    int i,j,diff;

    printf("Enter the 1st alpha: ");
    scanf(" %c", &alpha1);

    printf("Enter the 2nd alpha: ");
    scanf(" %c", &alpha2);

    alpha1 = toupper(alpha1);
    alpha2 = toupper(alpha2);

    if(alpha2>=alpha1)
    {
        diff = alpha2 - alpha1;
    }
    else
    {
        diff = alpha1 - alpha2;
    }

    printf("The difference between '%c' and '%c' is %d\n\n", alpha2, alpha1, diff);

    for (i = diff; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
