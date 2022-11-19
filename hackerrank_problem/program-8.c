// max even sum in c program...

#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d",&N);
    int A[N];

    for(i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    int max = 0, sum = 0;
    for(int i = 0; i < N; i++)
    {
        if(A[i] % 2 == 0){
            if(A [i] > max)
            {
                max = A[i];
            }
        }
    }

    for(i = 0; i < N; i++){
        sum = 0;
        for(j = i + 1; j < N; j++){
            sum = A[i] + A[j];

            if(sum % 2 == 0){
                if(sum > max){
                    max = sum;
                }
            }
        }
    }

    printf("%d",max);

return 0;
}
