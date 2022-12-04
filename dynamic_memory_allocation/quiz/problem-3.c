#include <stdio.h>
#include <stdlib.h>
int main()
{

  int* ptr;
  ptr = (int*) malloc(1*sizeof(int));
  printf("%d",*ptr);
  return 0;
}
