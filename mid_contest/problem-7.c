#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    char string1[20];
    int i, l, length;


    for(l = 0; l < t; l++){
        int flag = 0;
        scanf("%s", string1);

        length = strlen(string1);

        for(i = 0; i < length; i++){
            if(string1[i] != string1[length-i-1]){
                flag = 1;
                break;
               }
            }

        if (flag) {
            printf("Case #1: Not Palindrome \n");
        }
        else {
            if(length >= 1 && length <= 100){
                if(length > 7){
                    printf("Case #2: %c%d%c \n", string1[0], length - 2, string1[length - 1]);
                }
                else{
                    printf("Case #3: %s \n", string1);
                }
            }
        }
    }

return 0;
}

