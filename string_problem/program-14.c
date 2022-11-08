//counting string length in c program input as from user....

#include <stdio.h>

int main() {
     int count = 0;
     char word[1000];
     printf("Enter your sentence: ");
     fgets(word, sizeof(word), stdin);

     int i = 0;
     while(word[i] != '\0'){
        if(word[i] == 'a' || word[i] == 'A'){
          count++;
        }
        else if(word[i] == 'e' || word[i] == 'E'){
            count++;
        }
        else if(word[i] == 'i' || word[i] == 'I'){
            count++;
        }
        else if(word[i] == 'o' || word[i] == 'O'){
            count++;
        }
        else if(word[i] == 'u' || word[i] == 'U'){
            count++;
        }

        i++;
     }
     printf("%d", count);

return 0;
}


