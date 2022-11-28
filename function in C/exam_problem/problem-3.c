//if the digit string in 1, 7, 9 will be exist print yes other wise no in c program....

#include <stdio.h>

void myfunc(char digit[100]) {
    int i = 0, a = 0, b = 0, c = 0;

    while(digit[i] != '\0') {
        if(digit[i] == '1'){
            a = 1;
        }
        else if(digit[i] == '7'){
            b = 1;
        }
        else if(digit[i] == '9'){
            c = 1;
        }

        i++;
    }
    if(a==1 && b==1 && c==1){
        printf("Yes");
    }
    else{
        printf("No \n");
    }

return;
}

int main() {
    char digit[100];
    printf("Enter your digit: ");
    scanf("%s", digit);
    myfunc(digit);

return 0;
}
