//check a string is binary or not in c program....

#include <stdio.h>
#include <string.h>

int checked_binary(char str[]) {
    int flag, len = strlen(str);

    flag = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == '0' || str[i] == '1'){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }
    return flag;
}

int main() {
    char str[100];
    printf("Enter your string: ");
    scanf("%s", str);
    int ans = checked_binary(str);

    if(ans == 1){
        printf("Yes \n");
    }
    else{
        printf("No \n");
    }

return 0;
}
