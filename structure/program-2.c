//Structure in c program...

#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[30];
    int age;
    char gender[10];
    float weight;
};

int main() {
    struct Student s;
    s.id = 144369;
    strcpy(s.name, "Habibor Rahaman");
    s.age = 22;
    strcpy(s.gender, "Meal");
    s.weight = 54.5;

    printf("%d\n", s.id);
    printf("%s\n", s.name);
    printf("%d\n", s.age);
    printf("%s\n", s.gender);
    printf("%0.2f\n", s.weight);

return 0;
}


