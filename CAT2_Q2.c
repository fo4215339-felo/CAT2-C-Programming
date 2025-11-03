/*
NAME ; FELIX OMONDI OTIENO
REG NO: PA106/G/28817/25
DATE : 3 OCT 2025
*/

#include <stdio.h>

int main() {
    float hours_worked, hourly_wage;
    float gross_pay, taxes, net_pay, overtime_hours;

    // Request input from the user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);

    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    // Calculate gross pay
    if (hours_worked > 40) {
        overtime_hours = hours_worked - 40;
        gross_pay = (40 * hourly_wage) + (overtime_hours * hourly_wage * 1.5);
    } else {
        gross_pay = hours_worked * hourly_wage;
    }

    // Calculating taxes
    if (gross_pay <= 600) {
        taxes = 0.15 * gross_pay;
    } else {
        taxes = (0.15 * 600) + (0.20 * (gross_pay - 600));
    }

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Displaying results
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}