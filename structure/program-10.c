//Structure in c program multiple object create input from user use pointer struct...

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
    struct Student *sp = &s;

    for(int i = 1; i <= n; i++){
        printf("Enter value of student %d \n", i);
        scanf("%d", (sp + i)->id);
        scanf("%s", (sp + i)->name);
        scanf("%d", (sp + i)->age);
        scanf("%s", (sp + i)->gender);
        scanf("%f", (sp + i)->weight);
    }

    printf("\n");
    for(int i = 1; i <= n; i++){
        printf("Value of student %d \n", i);
        printf("%d\n", (sp + i)->id);
        printf("%s\n", (sp + i)->name);
        printf("%d\n", (sp + i)->age);
        printf("%s\n", (sp + i)->gender);
        printf("%0.2f\n", (sp + i)->weight);
        printf("\n");
    }

return 0;
}
