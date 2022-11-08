//how many vowel in a string exist....

#include <stdio.h>

int main() {
    char ch[1000];
    printf("Enter the string: ");

    fgets(ch, sizeof(ch), stdin);

    int i = 0, counter = 0;
    while(ch[i] != '\0'){

        if(ch[i] == 'a' || ch[i] == 'A'){
            counter++;
        }
        else if(ch[i] == 'e' || ch[i] == 'E'){
            counter++;
        }
        else if(ch[i] == 'i' || ch[i] == 'I'){
            counter++;
        }
        else if(ch[i] == 'o' || ch[i] == 'o'){
            counter++;
        }
        else if(ch[i] == 'u' || ch[i] == 'u'){
            counter++;
        }
        i++;
    }

    printf("%d", counter);

return 0;
}
