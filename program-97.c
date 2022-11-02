/* You will be given an positive integer N and after that an integer array of size N. Then you will be given Q which
refers to queries. For each query you will be given i and v where i refers to the index and v to value. You need to
add the value to that index. After all of the queries print the values */

#include <stdio.h>

int main() {
    int n, query, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int ara[n];

    //stor element in array input from user...
    printf("Insert array element: ");
    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    //input query from user...
    printf("Enter the value of query: ");
    scanf("%d", &query);
    int index, increment;
    for(i = 0; i < 2; i++){
        scanf("%d %d", &index, &increment);
        ara[index] = increment;
    }

    // edit array print here...
    for(i = 0; i < n; i++){
        int item = ara[i];
        printf("%d ", item);
    }

return 0;
}
