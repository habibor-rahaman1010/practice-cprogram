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
    struct Student s;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Enter value of student %d \n", i);
        scanf("%d", &s.id);
        scanf("%s", s.name);
        scanf("%d", &s.age);
        scanf("%s", s.gender);
        scanf("%f", &s.weight);
    }

    printf("\n");
    for(int i = 1; i <= n; i++){
        printf("%d\n", s.id);
        printf("%s\n", s.name);
        printf("%d\n", s.age);
        printf("%s\n", s.gender);
        printf("%0.2f\n", s.weight);
    }

    printf("\n");

return 0;
}
