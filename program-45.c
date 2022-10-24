//chocolate count in c program...

#include <stdio.h>

int main() {
    int n, chok, pack;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    chok = n;
    pack = n;

    for(; pack >= 4 ;){
        chok += pack / 4;
        pack = (pack / 4) + (pack % 4);
    }
    printf("Total chocolate: %d", chok);

return 0;
}
