//Operator!!


#include <stdio.h>
#include <string.h>

int main() {
    char operat[20];
    printf("Enter your operators: ");
    scanf("%s", operat);

    int a, b, i, sum = 0, len = strlen(operat);
    printf("Enter the value of (a and b): ");
    scanf("%d %d", &a, &b);

    for(i = 0; i < len; i++){
        if(operat[i] == '+'){
            sum += a + b;
        }
        else{
            sum += a * b;
        }
    }
    printf("%d", sum);

return 0;
}
