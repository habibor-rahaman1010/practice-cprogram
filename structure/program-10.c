//Structure in c program multiple object create input from user...

#include <stdio.h>

struct Student {
    int id;
    char name[30];
    int age;
    char gender[10];
    float weight;
};

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    struct Student s[n + 1];

    for(int i = 1; i <= n; i++){
        printf("Enter value of student %d \n", i);
        scanf("%d", &s[i].id);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].age);
        scanf("%s", s[i].gender);
        scanf("%f", &s[i].weight);
    }

    printf("\n");
    for(int i = 1; i <= n; i++){
        printf("Value of student %d \n", i);
        printf("%d\n", s[i].id);
        printf("%s\n", s[i].name);
        printf("%d\n", s[i].age);
        printf("%s\n", s[i].gender);
        printf("%0.2f\n", s[i].weight);
        printf("\n");
    }

return 0;
}
