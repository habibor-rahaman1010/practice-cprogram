//Structure in c program...

#include <stdio.h>

struct Student {
    int id;
    char *name;
    int age;
    char *gender;
    float weight;
};

int main() {
    struct Student s = {.name = "Habibor Rahaman", .age = 22, .gender = "Meal", .weight = 54.5 .id = 144369};

    printf("%d\n", s.id);
    printf("%s\n", s.name);
    printf("%d\n", s.age);
    printf("%s\n", s.gender);
    printf("%0.2f\n", s.weight);

return 0;
}

