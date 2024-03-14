//Program to calculate discount if cost is more than 1000
#include <stdio.h>

/*
// Function prototype
double calculateTotal(int quantity, double pricePerItem);

int main()
{
    int quantity;
    double pricePerItem;

    // Read quantity and price per item from the user
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("Enter price per item: ");
    scanf("%lf", &pricePerItem);

    // Calculate and print the total amount to be paid
    printf("Total amount to be paid: %.2f", calculateTotal(quantity, pricePerItem));

    return 0;
}
*/

main()
{
    int quantity, cost_per_item,cost, total_cost;
    printf("Enter the quantity of items: \n");
    scanf("%d", &quantity);
    printf("Enter the cost per item: \n");
    scanf("%d", &cost_per_item);

    cost = quantity*cost_per_item;

    if (cost > 1000)
    {
        total_cost = cost - (cost*10)/100;
        printf("Actual cost to be paid = %d\n", cost);
        printf("Total cost to be paid after discount = %d", total_cost);
    }
    else
        printf("Total cost to be paid = %d", cost);
}
