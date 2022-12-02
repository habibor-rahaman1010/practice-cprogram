//Broken keyboard

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter your string: ");
    scanf("%s", str);

    int i = 0, len = strlen(str);
    while(i <= len){
        printf("%c", str[i]);
        if(i % 2 != 0){
            printf("%c", str[i]);
        }
        i++;
    }

return 0;
}
