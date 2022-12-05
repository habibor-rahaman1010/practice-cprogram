#include <stdio.h>

int main() {
  struct student {
    char id[15];
    char firstname[64];
    char lastname[64];
    float points;
  };
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  struct student std[n];
  struct student *ptr;

  int i;
  ptr = std;
  // get detail for user
  for (i = 1; i <= n; i++) {
    printf("Enter detail of student #%d\n", (i));
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

  for (i = 1; i <= n; i++) {
    printf("\nDetail of student #%d\n", (i));
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
