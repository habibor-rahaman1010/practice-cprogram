

#include <stdio.h>

struct Student {
    char name[30];
    int roll_number;
    int marks;
};

int main() {
    struct Student habib;

    printf("Enter the name of student: ");
    fgets(habib.name, 30, stdin);

    printf("Enter the roll of student: ");
    scanf("%d", &habib.roll_number);

    printf("Enter the marks of student: ");
    scanf("%d", &habib.marks);

    printf("\n");
    printf("Name: %s", habib.name);
    printf("Roll No: %d \n", habib.roll_number);
    printf("Name: %d \n", habib.marks);

return 0;
}
