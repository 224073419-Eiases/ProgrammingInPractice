#include <stdio.h>
 int main() {
    double revenue;
    double expenses;
    double balance;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    
    printf("Enter Total Revenue: ");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\n---------------------------------\n");
    printf("revenue: %.2lf\n", revenue);
    printf("expenses: %.2lf\n", expenses);
    printf("balance: %.2lf\n", balance);
    return 0;
 }