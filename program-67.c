// codeforses problem...

#include <stdio.h>

int main() {
    int n, h, i, x, count = 0;
    printf("Enter the value of (n and h): ");
    scanf("%d %d", &n, &h);

    if(1 <= n && n <= 1000 && 1 <= h && h <= 1000){
        for(i = 1; i <= n; i++){
            printf("Enter value of x: ");
            scanf("%d", &x);
            if(x > h){
                count += 2;
            }
            else{
                count++;
            }
        }
        printf("%d ", count);
    }

return 0;
}
