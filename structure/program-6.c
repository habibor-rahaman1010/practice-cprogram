//Structure in c program multiple object create input from user...

#include <stdio.h>

struct Student {
    int id;
    char *name;
    int age;
    char *gender;
    float weight;
};

int main() {
    struct Student s;
    scanf("%d", &s.id);
    scanf("%s", s.name);
    scanf("%d", &s.age);
    scanf("%s", s.gender);
    scanf("%lf", &s.weight);

    printf("%d\n", s.id);
    printf("%s\n", s.name);
    printf("%d\n", s.age);
    printf("%s\n", s.gender);
    printf("%0.2f\n", s.weight);

    printf("\n");

return 0;
}
