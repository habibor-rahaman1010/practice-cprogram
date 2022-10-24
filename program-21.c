//Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division.

#include <stdio.h>

int main() {
    int roll;
    char fname[20];
    char lname[20];
    int maths, physics, chemistry, programming;
    int total_marks;
    float parcentage;


    printf("Enter the value of roll for student: ");
    scanf("%d", &roll);

    printf("Enter the value of name for student: ");
    scanf("%s %s", fname, lname);

    printf("Enter the number of math for student: ");
    scanf("%d", &maths);

    printf("Enter the number of physics for student: ");
    scanf("%d", &physics);

    printf("Enter the number of chemistry for student: ");
    scanf("%d", &chemistry);

    printf("Enter the number of programming for student: ");
    scanf("%d", &programming);

    //now print all information....
    total_marks = (maths + physics + chemistry + programming);
    parcentage = (total_marks / 4.0);

    printf("\n");
    printf("Roll No: %d \n", roll);
    printf("Name of student: %s %s \n", fname, lname);
    printf("Marks in math: %d \n", maths);
    printf("Marks in physics: %d \n", physics);
    printf("Marks in chemistry: %d \n", chemistry);
    printf("Marks in programming: %d \n", programming);
    printf("Total marks = %d \n", total_marks);
    printf("parcentage = %.0lf%% \n", parcentage);
    if(total_marks >= 80){
        printf("Division is = First Class");
    }
    else if(total_marks < 80 && total_marks >= 70){
        printf("Division is = Second Class");
    }
    else if(total_marks < 70 && total_marks >= 50){
        printf("Division is = This Class");
    }
    else{
        if(total_marks < 50 && total_marks >= 40){
            printf("Division is = Pass");
        }
        else{
            printf("Division is = Fail");
        }
    }

return 0;
}
