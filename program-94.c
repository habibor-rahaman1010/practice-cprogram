// calculate student marks in c program...

#include <stdio.h>

int main() {
    int i, j, n;
    double sum, avg, number;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter the value number of %d student! \n", (i + 1));

        sum = 0;
        for(j = 0; j < 3; j++){
            printf("Enter value subject %d: ", (j + 1));
            scanf("%lf", &number);
            sum += number;
        }
        avg = sum / 3;
        printf("Total marks of student %d = %lf\n", (i + 1), avg);
        printf("\n");
    }

return 0;
}
