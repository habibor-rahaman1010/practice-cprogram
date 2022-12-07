// structure in c program...

#include <stdio.h>
#include <stdio.h>

struct Student {
    int id;
    char name[30];
    float marks;
};

void printStudent(struct Student s, int i){
        // when id value is odd then print the student details...
    if(s.id % 2 != 0){
        printf("Value of student %d: \n", (i + 1));
        printf("%d \n", s.id);
        printf("%s \n", s.name);
        printf("%f \n", s.marks);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    struct Student ara[n];

    int i;
    for(i = 0; i < n; i++){
        printf("Enter the value of student %d: ", (i + 1));
        scanf("%d", &ara[i].id);
        scanf("%s", ara[i].name);
        scanf("%f", &ara[i].marks);
    }
    printf("\n");

    for(i = 0; i < n; i++){
        printStudent(ara[i], i);
    }
return 0;
}



