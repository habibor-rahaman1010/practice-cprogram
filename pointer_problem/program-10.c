// array sort use bubble sort in c program... small to large

#include <stdio.h>

void do_swap(int ara[], int j) {
    int tamp = ara[j];
    ara[j] = ara[j + 1];
    ara[j + 1] = tamp;
}

void bubble_sort(int ara[], int n) {
    int i, j, tamp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1; j++){
            if(ara[j] > ara[j + 1]){
                do_swap(ara, j);
            }
        }
    }
    for(i = 0; i < n; i++){
        printf("%d ", ara[i]);
    }
}

int make_array(int n) {
    int ara[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }
    bubble_sort(ara, n);
}


int main() {
    int n, i;
    printf("Enter the value of size array: ");
    scanf("%d", &n);

    make_array(n);

return 0;
}
