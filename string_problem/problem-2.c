//You are given a string S of small letters , Now count the number of vowels and consonant from the given string.

#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    printf("Enter your string here: ");
    fgets(s, sizeof(s), stdin);
    int i, len = strlen(s) - 1;

    int vowel = 0, consonant = 0;
   for(i = 0; i <= len -1; i++){
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            if(s[i] == 'a' || s[i] == 'A'){
                vowel++;
            }
            else if(s[i] == 'e' || s[i] == 'E'){
                vowel++;
            }
            else if(s[i] == 'i' || s[i] == 'I'){
                vowel++;
            }
            else if(s[i] == 'o' || s[i] == 'O'){
                vowel++;
            }
            else if(s[i] == 'u' || s[i] == 'U'){
                vowel++;
            }
            else{
                consonant++;
            }
        }
    }

    printf("Vowel - %d \n", vowel);
    printf("Consonant - %d \n", consonant);

return 0;
}
