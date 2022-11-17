//create a calculator in c program...

#include <stdio.h>

int main() {
    int x, y, ans;
    char ch;

    printf("Enter value of (x and y): ");
    scanf("%d %d", &x, &y);

    printf("Enter your operator: ");
    getchar();
    ch = getchar();

    if(ch == '+'){
        ans = x + y;
        printf("Sum is = %d \n", ans);
    }
    else if(ch == '-'){
        ans =  x - y;
        printf("Subtract is = %d \n", ans);
    }
    else if(ch == '*'){
        ans =  x * y;
        printf("Multiply is = %d \n", ans);
    }
    else if(ch == '/'){
        ans = x / y;
        printf("Divide is = %d \n", ans);
    }
    else{
        printf("Invalid your input, please try again!");
    }

return 0;
}
