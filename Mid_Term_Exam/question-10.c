#include <stdio.h>

int main()
{
   int digit, sum = 0, remainder;
   printf("Enter the value of digit: ");
   scanf("%d", &digit);

   while (digit != 0)
   {
      remainder = digit % 10;
      sum = sum + remainder;
      digit = digit / 10;
   }

   printf("Sum of digits: %d ", sum);

   return 0;
}
