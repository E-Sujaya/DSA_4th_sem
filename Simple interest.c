//Calculating simple interest
#include<stdio.h>
main()
{
    int p, r, t, i, ta;
    printf("Enter principle amount, rate of interest, and time :-\n");
    scanf("%d%d%d", &p, &r, &t);

    i = (p*r*t)/100;
    printf("The simple interest on Rs.%d is :- %i\n", p, i);
    ta = p + i;
    printf("The total amount to be paid = %d ", ta);
}
