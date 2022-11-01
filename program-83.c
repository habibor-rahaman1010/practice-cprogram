//Missing number find out in c program..

#include <stdio.h>

int main() {

    int i, n, x;
    int arr[100];

    printf("Enter the vale of n: ");
    scanf("%d", &n);

    // initial array all value set 0...
    for(i = 0; i < n; i++){
        arr[i] = 0;
    }

    for(i = 1; i <= n; i++){
        scanf("%d", &x);
        arr[x] = 1;
    }

    for(i = 1; i <= n; i++){
        if(arr[i] == 0){
            printf("\nMissing number is: %d", i);
            break;
        }
    }
return 0;
}
