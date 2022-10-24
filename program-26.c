//Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>

int main() {
    int cost_price, sell_price, profit;
    printf("Enter the value of cost an sell price: ");
    scanf("%d %d", &cost_price, &sell_price);

    if(sell_price > cost_price){
        profit = sell_price - cost_price;
        printf("Total profit is: %d", profit);
    }
    else if(cost_price > sell_price){
        profit = cost_price - sell_price;
        printf("Total loss is: %d", profit);
    }
    else{
        printf("No profit and no loss, your position is equal.\n");
    }


return 0;
}
