#include <stdio.h>
#include <string.h>

void frequency_sort(char ch_ara, char str[1001]) {
    for( int j = 0; j < strlen(str); j++){
        if(ch_ara == str[j]){
            printf("%c", str[j]);
        }
    }
}

int main () {
    char str[1001], ch_ara[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                                'u', 'w', 'x', 'y', 'z'};
    printf("Enter your string: ");
    fgets(str, 1001, stdin);
    for(int i = 0; i < strlen(ch_ara); i++) {
        frequency_sort(ch_ara[i], str);
    }
    printf("\n");
}
