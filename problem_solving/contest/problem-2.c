//different to the first and second number....

#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    if(x >= 0 && y <= 250){
        printf("%d", (x - y));
    }

return 0;
}
