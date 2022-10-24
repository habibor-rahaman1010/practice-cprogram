//Triangle

#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if(A == B && A == C && B == C && A > 0 && A <= 100 && B > 0 && B <= 100 && C > 0 && C <= 100){
        printf("Yes");
    }
    else{
        printf("No");
    }

return 0;
}
