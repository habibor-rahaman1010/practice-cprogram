// structure in c program...

#include <stdio.h>
#include <stdio.h>

struct Student {
    int id;
    char name[30];
    float marks;
};

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    struct Student ara[n];

    int i;
    for(i = 0; i < n; i++){
        printf("Enter the value of student %d: ", (i + 1));
        scanf("%d", &ara[i].id);
        scanf("%s", ara[i].name);
        scanf("%f", &ara[i].marks);
    }
    printf("\n");

    // when id value is even then print the student details...
    for(i = 0; i < n; i++){
        if(ara[i].id % 2 == 0){
            printf("Value of student %d: \n", (i + 1));
            printf("%d \n", ara[i].id);
            printf("%s \n", ara[i].name);
            printf("%f \n", ara[i].marks);
            printf("\n");
        }
    }
return 0;
}

