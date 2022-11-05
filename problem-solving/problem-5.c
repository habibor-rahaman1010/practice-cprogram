#include <stdio.h>

int main() {
    int i, t, x, need;
    scanf("%d", &t);

    if(t >= 1 && t <= 101){
        for(i = 0; i < t; i++){
            scanf("%d%%", &x);

            if(x < 60){
                int a = (60 - x) * 1;
                int b = (80 - 60) * 2;
                int c = (100 - 80) * 3;
                need = (a + b + c);
                printf("%d minutes \n", need);
            }

            else if(x >= 60 && x < 80){
                int a = (80 - x) * 2;
                int b = (100 - 80) * 3;
                need = (a + b);
                printf("%d minutes \n", need);
            }

            else if(x >= 80 && x <= 99){
                int c = (100 - x) * 3;
                need = c;
                printf("%d minutes \n", need);
            }

            else{
                need = (100 - x);
                printf("%d minutes \n", need);
            }
        }
    }


return 0;
}
