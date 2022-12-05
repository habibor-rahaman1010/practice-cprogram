#include <stdio.h>

int main(void) {

  // student structure
  struct student {
    char id[15];
    char firstname[64];
    char lastname[64];
    float points;
  };

  // student structure variable
  struct student std[3];

  // student structure pointer variable
  struct student *ptr = NULL;

  // other variables
  int i;

  // assign std to ptr
  ptr = std;

  // get detail for user
  for (i = 0; i < 3; i++) {
    printf("Enter detail of student #%d\n", (i + 1));
    printf("Enter ID: ");
    scanf("%s", ptr->id);
    printf("Enter first name: ");
    scanf("%s", ptr->firstname);
    printf("Enter last name: ");
    scanf("%s", ptr->lastname);
    printf("Enter Points: ");
    scanf("%f", &ptr->points);

    // update pointer to point at next element
    // of the array std
    ptr++;
  }

  // reset pointer back to the starting
  // address of std array
  ptr = std;

  for (i = 0; i < 3; i++) {
    printf("\nDetail of student #%d\n", (i + 1));

    // display result via std variable
    printf("\nResult via std\n");
    printf("ID: %s\n", std[i].id);
    printf("First Name: %s\n", std[i].firstname);
    printf("Last Name: %s\n", std[i].lastname);
    printf("Points: %f\n", std[i].points);

    // display result via ptr variable
    printf("\nResult via ptr\n");
    printf("ID: %s\n", ptr->id);
    printf("First Name: %s\n", ptr->firstname);
    printf("Last Name: %s\n", ptr->lastname);
    printf("Points: %f\n", ptr->points);

    // update pointer to point at next element
    // of the array std
    ptr++;
  }

  return 0;
}
