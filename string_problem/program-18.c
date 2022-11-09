
#include <stdio.h>
#include <string.h>

int main() {
    char word[1000];
    scanf("%s", word);

    int len = strlen(word);

    int i;
    for(i = 0; i < len; i++){
       if(word[i] >= 'a' && word[i] <= 'z' || word[i] >= 'A' && word[i] <= 'Z'){
            if(word[0] >= 97){
                word[len - (len - 1) - 1] -= 32;
           }
       }
    }
    printf("%s", word);

return 0;
}
