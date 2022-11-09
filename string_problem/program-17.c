//A. Way Too Long Words codeforcess...

#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    fgets(word, sizeof(word), stdin);
    int len = strlen(word) - 1;

    if(len >= 1 && len <= 100){
        if(len > 10){
            printf("%c%d%c", word[0], len - 2, word[len - 1]);
        }
        else{
            puts(word);
        }
    }

return 0;
}
