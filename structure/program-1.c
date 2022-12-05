//Structure in c program...

#include <stdio.h>

struct Student {
    int id;
    int age;
    float weight;
};

int main() {
    struct Student s = {
        144369,
        22,
        55.0
    };

    printf("%d", s.age);

return 0;
}

