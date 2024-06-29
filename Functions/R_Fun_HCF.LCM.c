#include <stdio.h>

int hcf(int,int);

int main()
{
  int num1, num2, hcd, lcm;
  printf("Enter two integer numbers:\n");
  scanf("%d %d", &num1, &num2);

  hcf = hcf(num1, num2);
  lcm = (num1*num2)/hcf;

  printf("HCF of %ld and %d = %d\n", num1, num2, gcd);
  printf("LCM of %ld and %d = %d\n", num1, num2, lcm);

  return 0;
}

int hcf(int a, int b) 
{
  if (b == 0)
  {
    return a;
  }
  else
  {
    return hcf(b, a % b);
  }
}
