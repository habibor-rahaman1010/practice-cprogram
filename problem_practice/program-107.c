//fibonacchi series in program...

#include <stdio.h>

int main() {
    int i, n;
    int n1 = 0, n2 = 1;
    int next_term = n1 + n2;

    printf("Enter the number of term: ");
    scanf("%d", &n);
    printf("%d %d ", n1, n2);

    //print third to nth term...
    for(i = 3; i <= n; i++){
        printf("%d ", next_term);
        n1 = n2;
        n2 = next_term;
        next_term = n1 + n2;
    }


return 0;
}
