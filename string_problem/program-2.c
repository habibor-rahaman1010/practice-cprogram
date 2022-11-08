//character in c program....

#include <stdio.h>

int main() {
    int len = 6;
    char ch[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};

    for(int i = 0; i <= len - 1; i++){
        printf("%c ", ch[i]);
    }


return 0;
}
