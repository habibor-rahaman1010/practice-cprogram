// sort in c program

#include <stdio.h>

void array_sort(int number[], int N) {
    int i, j, tamp;

    for(i = 0; i < N; i++){
        for(j  = 0; j < N - 1; j++){
            if(number[j] > number[j + 1]){
                tamp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = tamp;
            }
        }
    }
    for(i = 0; i < N; i++){
        printf("%d ", number[i]);
    }

}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int number[N];
    printf("Enter element of number array: ");
    for(int i = 0; i < N; i++){
        scanf("%d", &number[i]);
    }

    array_sort(number, N);

return 0;
}
