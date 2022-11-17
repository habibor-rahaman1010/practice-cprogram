#include <stdio.h>

void riangle(int a, int b, int c) {
    if(a == b && a == c && b == a && b == c){
        printf("Yes");
    }
    else{
        printf("No");
    }

}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(0 <= a && 0 <= b && 0 <= b && a <= 100 && b <= 100 && c <= 100){
        riangle(a, b, c);
    }

return 0;
}
