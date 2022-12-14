// tic tok toe

#include <stdio.h>
#include <stdbool.h>

int isWin(int ara[4][4], int n) {
    for(int i = 1; i <= n; i++){
        if(ara[i][1] == ara[i][2] && ara[i][2] == ara[i][3] && ara[i][1] != -1){
            return ara[i][1];
        }
    }

    for(int j = 1; j <= n; j++){
        if(ara[1][j] == ara[2][j] && ara[2][j] == ara[3][j] && ara[1][j] != -1){
            return ara[1][j];
        }
    }

    if(ara[1][1] == ara[2][2] && ara[2][2] == ara[3][3] && ara[1][1] != -1){
        return ara[1][1];
    }

    if(ara[1][3] == ara[2][2] && ara[2][2] == ara[3][1] && ara[1][3] != -1){
        return ara[1][3];
    }

    return -1;
}

void printCell(int ara[4][4], int n) {
    int i, j;
     for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(ara[i][j] == -1)printf(" ");
            if(ara[i][j] == 1) printf("X");
            if(ara[i][j] == 2) printf("O");
            if(j < n) printf("\t | \t");
        }
        printf("\n");
        if(i < n) printf("____________________________________");
        printf("\n \n");

   }
}

int main() {
    int i, j, n = 3;
    int ara[4][4];

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            ara[i][j] = -1;
        }
    }

    bool player1 = true;
    bool player2 = false;

    while(true){
        printf("\n");
        printCell(ara, n);
        if(player1 == true){
            int r, c;
            Flag1:
            printf("Player 1 turn on (X), Enter Row and Column: ");
            scanf("%d %d", &r, &c);

            if(ara[r][c] != -1){
                printf("Cell is already used! \n");
                goto Flag1;
            }
            ara[r][c] = 1;
            player1 = false;
            player2 = true;

        }
        else{
            int r, c;
            Flag2:
            printf("Player 2 turn on (O), Enter Row and Column: ");
            scanf("%d %d", &r, &c);

            if(ara[r][c] != -1){
                printf("Cell is already used! \n");
                goto Flag2;
            }
            ara[r][c] = 2;
            player2 = false;
            player1 = true;
        }

        //who is wins....
        int win = isWin(ara, n);
        if(win == 1){
            printf("Player 1 is win! \n");
            printCell(ara, n);
            break;
        }
        else if(win == 2){
            printf("Player 2 is win! \n");
            printCell(ara, n);
            break;
        }
    }

return 0;
}
