//Plus Minus count in c program..


#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);

    int count = 1, max = 0;
    for(i = 0; i < n - 1; i++){
        if(s[i] == s[i + 1]){
            count++;
        }
        else{
            if(max < count){
                max = count;
            }
        }
    }

     if(max < count){
        max = count;
    }
    printf("%d \n", max);
}
