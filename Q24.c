// Write a C program to calculate electricity bill.
#include<stdio.h>
int main()
{
    int total_unit;
    int net_bill;
    float per_unit_cost;
    per_unit_cost = 7.25;

    printf("total unit = ", total_unit);
    scanf("%d", &total_unit);

    net_bill = (total_unit * per_unit_cost);

    printf("Total Electricity Bill = %d", net_bill);
    return 0;
}