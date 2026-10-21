#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iNo1)
{

  if (iNo1 <= 0)
  {
    printf("Invalid year");
    return;
  }

  if ((iNo1 % 400 == 0) || ((iNo1 % 4 == 0) && (iNo1 % 100 != 0)))
  {
    printf("%d is a Leap Year", iNo1);
  }
  else
  {
    printf("%d is not a Leap Year", iNo1);
  }
}

int main()
{
  int iYear = 0;

  printf("Enter year : \n");
  scanf("%d", &iYear);

  CheckLeapYear(iYear);

  return EXIT_SUCCESS;
}