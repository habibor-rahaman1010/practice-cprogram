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
    struct Student *ptr = s;

    for(int i = 1; i <= n; i++){
        printf("Enter value of student %d \n", i);
        scanf("%d", (ptr->id));
        scanf("%s", (ptr->name));
        scanf("%d", (ptr->age));
        scanf("%s", (ptr->gender));
        scanf("%f", (ptr->weight));
        ptr++;
    }

    printf("\n");
    for(int i = 1; i <= n; i++){
        printf("Value of student %d \n", i);
        printf("%d\n", (ptr->id));
        printf("%s\n", (ptr->name));
        printf("%d\n", (ptr->age));
        printf("%s\n", (ptr->gender));
        printf("%0.2f\n", (ptr->weight));
        printf("\n");
        ptr++;
    }

return 0;
}
