/*You are given a string S of small letters, now sort the string...*/

#include <stdio.h>
#include <string.h>

int main() {
    char ara[100];
    int i, j, tamp;
    printf("Enter your string: ");
    scanf("%s", ara);
    int len = strlen(ara);

    for(i = 0; i <= len - 1; i++){
        for(j = i + 1; j <= len - 1; j++){
            if(ara[i] > ara[j]){
                tamp = ara[i];
                ara[i] = ara[j];
                ara[j] = tamp;
            }
        }
    }

    printf("%s", ara);


return 0;
}
