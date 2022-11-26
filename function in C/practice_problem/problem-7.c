// calculator in c program....

#include <stdio.h>

void calculator(int x, int y, char symbol) {
    int result;

    if(symbol == '+'){
        result = x + y;
        printf("Summation is: %d \n", result);
    }
    else if(symbol == '-'){
        result = x - y;
        printf("Subtract is: %d \n", result);
    }
    else if(symbol == '*'){
        result = x * y;
        printf("Multiplication is: %d \n", result);
    }
    else if(symbol == '/'){
        result = x / y;
        printf("Divide is: %d \n", result);
    }
}

int main() {
    int a, b;
    char ch;
    printf("Enter your operator: ");
    scanf("%c", &ch);
    printf("Enter the value of (a and b): ");
    scanf("%d %d", &a, &b);

    calculator(a, b, ch);

return 0;
}
