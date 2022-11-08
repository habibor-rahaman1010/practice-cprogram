
/* C program to find all prime numbers from the inputted array */
#include<stdio.h>
int main(){
    int i, n, j, counter, count = 0;

    printf("Enter the size of the array ");
    scanf("%d",&n);
    int ara[n];
    printf("Now enter the elements of the array: ");

    for(i = 0; i < n; i++){
       scanf("%d", &ara[i]);
    }
    printf("\n");
    printf("All the prime numbers in the array are \n");
    for(i = 0; i < n; i++){
        counter = 0;

        for(j = 2; j < ara[i]; j++){
            if(ara[i] % j == 0){
                counter = 1;
                break;
            }
        }
        if(counter == 0){
            count++;
            printf("%d ", ara[i]);
       }
    }
    printf("\n%d", count);

return 0;
}




