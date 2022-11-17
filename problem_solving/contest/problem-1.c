//string revers in c program....

#include <stdio.h>
#include <string.h>

int main() {
    char ara[100];
    printf("Enter your text: ");
    fgets(ara, sizeof(ara), stdin);
    int len = strlen(ara);
    int i;

    for(i = len; i >= 0; i--){
        printf("%c", ara[i]);
    }

return 0;
}
