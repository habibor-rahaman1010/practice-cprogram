//You have given a string. Now your task is to sort this string in descending order. Implement this using function.

#include <stdio.h>
#include <string.h>

void swap(char str[1000], int j, int tamp) {
    tamp = str[j];
    str[j] = str[j + 1];
    str[j + 1] = tamp;
}

void sort_descending(char str[1000]) {
    int len = strlen(str);

    int i, j, tamp;
    for(i = 0; i < len; i++){
        for(j = 0; j < len - 1; j++){
            if(str[j] < str[j + 1]){
                swap(str, j, tamp);
            }
        }
    }

    for(i = 0; i < len; i++){
        printf("%c", str[i]);
    }

return;
}

int main() {
    char str[1000];
    printf("Enter your string: ");
    scanf("%s", str);

    sort_descending(str);

return 0;
}
