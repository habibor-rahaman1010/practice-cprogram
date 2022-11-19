#include <stdio.h>

int main() {
    int t, n, i, j;
    //scanf("%d", &t);
    scanf("%d", &n);
    char word[n];

    for(i = 0; i < n; i++){
        scanf("%s", &word[i]);
    }

    int count = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(word[j] == '1' && word[j + 1] == '0'){
                count++;
            }
        }
    }

    printf("%d", count);

return 0;
}
