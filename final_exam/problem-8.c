#include <stdio.h>

int main() {
    // initially store 0 in ara
    int ara[27];
    for(int i = 0; i < 27; i++){
        ara[i] = 0;
    }

    int n;
    scanf("%d", &n);

    char store[100];
    scanf("%s", store);

    int count = 0, i=0;
    while(store[i] != '\0') {
        if(store[i] >= 'a' && store[i] <= 'z') {
            ara[store[i] - 97] += 1;
        }

        i++;
    }

    for(i = 0; i < 27; i++){
        if(ara[i] == 1)
        count++;
    }

    printf("%d", count);

return 0;
}
