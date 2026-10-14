#include <stdio.h>

int main() {

    double basicSalary ;
    double housingAllowance;
    double transportAllowance;
    double tax;
    double grossSalary;
    double netSalary;

    printf("Employee Salary Calculator\n");

    printf("Enter basicSalary: ");
    scanf("%lf", &basicSalary);

    printf("Enter housingAllowance: ");
    scanf("%lf", &housingAllowance);

    printf("Enter transportAllowance: ");
    scanf("%lf", &transportAllowance);

    printf("Enter tax: ");
    scanf("%lf", &tax);

     grossSalary= basicSalary + housingAllowance + transportAllowance;
        netSalary = grossSalary - tax;

        printf("grossSalary: %.2f\n", grossSalary);
        printf("netSalary: %.2f\n", netSalary);
        
    return 0;
}