//Structure in c program multiple object create...

#include <stdio.h>

struct Student {
    int id;
    char *name;
    int age;
    char *gender;
    float weight;
};

int main() {
    struct Student s = {
        144369,
        "Habibor Rahaman",
        22,
        "Meal",
        54.5
    };

    struct Student s2 = {
        178234,
        "Tamim Sahariar Subeen",
        35,
        "Meal",
        64.5
    };

    printf("%d\n", s.id);
    printf("%s\n", s.name);
    printf("%d\n", s.age);
    printf("%s\n", s.gender);
    printf("%0.2f\n", s.weight);

    printf("\n");

    printf("%d\n", s2.id);
    printf("%s\n", s2.name);
    printf("%d\n", s2.age);
    printf("%s\n", s2.gender);
    printf("%0.2f\n", s2.weight);

return 0;
}


