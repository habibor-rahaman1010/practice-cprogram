#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int marks[n];

    for(i = 0; i < n; i++){
        scanf("%d", &marks[i]);
    }

    int highest = marks[0];
    for(i = 0; i < n; i++){
        if(marks[i] > highest){
            highest = marks[i];
        }
    }

    int newAra[n];
    for(i = 0; i < n; i++){
        newAra[i] = marks[i] - highest;
    }
    for(i = 0; i < n; i++){
        int ans = -newAra[i];
        printf("%d ", ans);
    }

return 0;
}
