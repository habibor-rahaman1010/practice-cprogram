/*You are given a string S of small letters, now check whether the given string is palindrome or not. If the string is
palindrome print YES otherwise print NO.*/

#include <stdio.h>
#include <string.h>

int main() {
    char ara[100];
    int i, j, tamp;
    printf("Enter your string: ");
    scanf("%s", ara);
    int len = strlen(ara);

    int flag = 1;
    for(i = 0, j = len - 1; i < len; i++, j--){
        if(ara[i] >= 'a' && ara[i] <= 'z' || ara[1] >= 'A' && ara[i] <= 'Z'){
            tamp = ara[i];
            ara[i] = ara[j];
            ara[j] = tamp;
        }
        for(i = 0; i < len; i++){
            printf("%c", ara[i]);
            if(ara[i] != ara[len - i - 1]){
                flag = 0;
            }
        }
    }

    if(flag == 1){
       printf("\nYes! \n");
    }
    else{
       printf("\nNo! \n");
    }

return 0;
}

