#include <stdio.h>


int main() {

    int row,col;
    scanf("%d %d",&row,&col);
    int Arr[row+1][col+1];
    int i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            scanf("%d",&Arr[i][j]);

        }
    }
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++)
        {
            if(Arr[i][j]==i && Arr[i][j]==j){
              Arr[i][j] += 3;
            }
            else if(Arr[i][j]==i && Arr[i][j] !=j){
              Arr[i][j] += 2;
            }
            else if(Arr[i][j] !=i && Arr[i][j]==j){
              Arr[i][j] += 1;
            }
        }

    }
     for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
          printf("%d ",Arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
