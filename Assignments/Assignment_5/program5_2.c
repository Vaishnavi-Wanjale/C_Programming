#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
  if (iValue % 2 == 0)
  {
    printf("Even number\n");
  }
  else
  {
    printf("Odd number\n");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter your number :\n");
  scanf("%d", &iValue);

  CheckEvenOdd(iValue);

  return EXIT_SUCCESS;
}