//capital case lower and lower case capital in c program....

#include <stdio.h>
#include <string.h>

void chnage_small(char str[100]) {
    int i, len = strlen(str);
    for(i = 0; i < len; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            printf("%c", str[i] -= 32);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            printf("%c", str[i] += 32);
        }
    }

return;
}

int main() {
    char str[100];
    printf("Enter your string: ");
    scanf("%s", str);

    chnage_small(str);

return 0;
}
