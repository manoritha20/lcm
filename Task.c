#include<stdio.h>
int lcm(int a, int b)
{
  static int common = 0;
  common += b;

  if(common%a == 0) return common; 
  else return lcm(a, b); 
}

int main()
{
   int num1, num2, result;

   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   if(num1 < num2) result = lcm(num1, num2);
   else result = lcm(num2, num1);

   printf("LCM = %d", result);

   return 0;
}
