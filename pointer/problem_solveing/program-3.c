/*
You are given a string S of small letters , Now calculate the cost of the string and tell that whether the cost of
the string is a power of two or not.
In this problem cost means the sum of the alphabetic order of the given string. Alphabetic order means
a = 1 , b = 2 , c = 3 .......... z = 26
*/

#include <stdio.h>
#include <string.h>

int checkPowerofTwo(int x)
{
   //checks whether a number is zero or not
   if (x == 0)
      return 0;

   //true till x is not equal to 1
   while( x != 1)
   {
      //checks whether a number is divisible by 2
      if(x % 2 != 0)
         return 0;
         x /= 2;
   }
   return 1;
}


int  myFunc(char ch[]) {
    int len = strlen(ch);
    int i = 0, cost = 0;

    for(i = 0; i < len; i++){
        cost += ch[i] - 96;
    }

    return checkPowerofTwo(cost);
}


int main() {
    char ch[100];
    scanf("%s", ch);
    int result = myFunc(ch);

    if(result == 1){
        printf("Yes \n");
    }
    else{
        printf("No \n");
    }

return 0;
}

