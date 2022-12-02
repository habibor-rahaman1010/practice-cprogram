/*
We give you a string. In string, every character have decimal value. If the decimal value of character is even then
make the character in uppercase. Implement this by using function.
*/

#include <stdio.h>

void replace_atring(char str[]) {
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] % 2 == 0){
            printf("%c", str[i] - 32);
        }
        else{
            printf("%c", str[i]);
        }

        i++;
    }

return;
}

int main() {
    char str[100];
    printf("Enter your string: ");
    scanf("%s", str);

    replace_atring(str);

return 0;
}
