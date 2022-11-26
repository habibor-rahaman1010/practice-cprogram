// vowel and consonant in c program....

#include <stdio.h>

int is_vowel(char ch) {
    if(ch == 'a' || ch == 'A'){
        return 1;
    }
    else if(ch == 'e' || ch == 'E'){
        return 1;
    }
    else if(ch == 'i' || ch == 'I'){
        return 1;
    }
    else if(ch == 'o' || ch == 'O'){
        return 1;
    }
    else if(ch == 'u' || ch == 'U'){
        return 1;
    }
    else{
        return 0;
    }

}

int main() {
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    if(is_vowel(ch)){
        printf("Vowel \n");
    }
    else{
        printf("Consonant \n");
    }

}
