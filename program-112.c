//way to long word problem in codeforcess...

#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    printf("Enter the sentence: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name) - 1;

    if(len > 10){
        printf("%c%d%c", name[0], len - 2, name[len - 1]);
    }
    else{
        puts(name);
    }


return 0;
}
