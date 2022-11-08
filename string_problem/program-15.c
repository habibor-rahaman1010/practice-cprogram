//small letter to capital letter in c program....

#include <stdio.h>

int main() {
    char name[100];
    printf("Enter the value of name: ");
    fgets(name, sizeof(name), stdin);

    int i = 0;
    while(name[i] != '\0'){
        if(name[i] >= 'a' && name[i] <= 'z'){
            name[i] -= 32;
        }
        i++;
    }
    printf("%s", name);
    //puts(name);


return 0;
}
