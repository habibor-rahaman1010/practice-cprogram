//counting string length in c program....

#include <stdio.h>

int main() {
     int count = 0;
     char word[100] = "Hello programmer, how can i help you?\0";

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
