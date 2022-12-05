#include<stdio.h>

struct Point
{
  int x, y, z;
};

int main()
{
  struct Point p = {.y = 5, .z = 10, .x = 20};
  return 0;
}
