// Mixed Array

#include <stdio.h>
#include <math.h>

double even_average(int *sum, int *even_counter) {
    return (double) *sum / *even_counter;
}

double get_average(int *ara,  int *n){
    int sum = 0, i, even_counter = 0;
    double avg = 0;

    for(i = 0; i < *n; i++){
        if(*(ara + i) % 2 == 0){
            sum += *(ara + i);
            even_counter++;
        }
    }
    avg = even_average(&sum, &even_counter);
    return (double)avg;
}

int get_prime(int *ara, int *n) {
    int i, j, counter = 0;

    for(i = 0; i < *n; i++){
        int flag = 1;

        if(*(ara + i) == 2){
            flag = 1;
        }

        if(*(ara + i) <= 1){
            flag = 0;
        }

        for(j = 2; j <= sqrt(*(ara + i)); j++){

            if(*(ara + i) % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            counter++;
        }
    }

    return counter;
}

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int ara[n];
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    int prime_count = get_prime(ara, &n);
    double average = get_average(ara, &n);

    printf("Prime numbers: %d \n", prime_count);
    printf("Average of all even integers: %0.2lf \n", average);

return 0;
}
