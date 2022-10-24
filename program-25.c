//Write a C program to check whether an alphabet is a vowel or consonant.

#include <stdio.h>

int main() {
    char sing_ch;
    printf("Input any alphabet: ");
    scanf("%c", &sing_ch);

    if(sing_ch == 'a' || sing_ch == 'e' || sing_ch == 'i' || sing_ch == 'o' || sing_ch == 'u' || sing_ch == 'A' || sing_ch == 'E' || sing_ch == 'I' || sing_ch == 'O' || sing_ch == 'U'){
        printf("The alphabet is a vowel.\n");
    }
    else if((sing_ch >= 'a' && sing_ch <= 'z') || (sing_ch >= 'A' && sing_ch <= 'Z')){
        printf("The alphabet is a consonant.\n");
    }
    else{
       printf("The character is not an alphabet.\n");
    }


return 0;
}
