//write a c program which will find out who is bigger...

#include <stdio.h>

int main() {
    int A, B;
    printf("Enter the no negative value of A and B: ");
    scanf("%d %d", &A, &B);

    if(A > B){
        printf("A is bigger \n");
    }
    else if(B > A){
        printf("B is bigger \n");
    }
    else{
        printf("They are equal \n");
    }

return 0;
}
