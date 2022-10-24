//Write a program in C to calculate and print the Electricity bill of a given customer.

#include <stdio.h>

    int main() {
    int id, unit;
    char fname[20];
    char lname[20];

    float charge, surcharge = 0, amount_charges, net_amount;

    printf("Input Customer ID: ");
    scanf("%d",&id);

    printf("Input the name of the customer: ");
    scanf("%s %s", fname, lname);

    printf("Input the unit consumed by the customer: ");
    scanf("%d",&unit);

    if(unit < 200){
        charge = 1.20;
    }
    else if(unit >= 200 && unit < 400){
        charge = 1.50;
    }
    else if(unit >= 400 && unit < 600){
        charge = 1.80;
    }
    else if(unit >= 600){
        charge = 2.00;
    }

    amount_charges = unit * charge;

    if(amount_charges > 400){
        surcharge = amount_charges * 15 / 100.0;
    }
    net_amount = amount_charges + surcharge;

    if(net_amount < 100){
        net_amount = 100;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID NO: %d\n", id);
    printf("Customer Name: %s %s\n", fname, lname);
    printf("Unit Consumed: %d\n",unit);
    printf("Amount Charges @Rs. %.2f per unit: %.2f\n", charge, amount_charges);
    printf("Surchage Amount of 15%%: %.2f\n", surcharge);
    printf("Net Amount Paid By the Customer: %.2f\n", net_amount);


return 0;
}
