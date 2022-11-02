//pattern draw in c program use for loop...

#include <stdio.h>

int main() {
    int totalRow, row, space, symbol;
    printf("Enter the value of Row: ");
    scanf("%d", &totalRow);

    for(row = 1; row <= totalRow; row++){
        //create space here...
        for(space = 1; space <= (totalRow - row); space++){
            printf("  ");
        }
        //print symbol here...
        for(symbol = 1; symbol <= ((row * 2) -1); symbol++){
            printf("* ");
        }

        printf("\n");
    }

return 0;
}



