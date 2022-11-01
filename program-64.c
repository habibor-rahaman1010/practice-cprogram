#include <stdio.h>
int main() {
    int M, N;
    printf("Enter the value of M and N: ");
    scanf("%d %d", &M, &N);

    if(1 <= M && M <= N && N <= 16){
        printf("%d", (M * N) / 2);
    }
return 0;
}
