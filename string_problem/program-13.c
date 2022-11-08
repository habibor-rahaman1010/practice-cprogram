//counting string length in c program input as from user....

#include <stdio.h>

int main() {
     int count = 0;
     char word[1000];
     printf("Enter your sentence: ");
     fgets(word, sizeof(word), stdin);

     int i = 0;
     while(word[i] > '\0'){
        if(word[i] > 32){
          count++;
        }

        i++;
     }
     printf("%d", count);

return 0;
}

