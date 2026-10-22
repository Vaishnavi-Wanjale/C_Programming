#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iFirst, int iSecond)
{
  if (iFirst > iSecond)
  {
    printf("%d is Greater\n", iFirst);
  }
  else if (iSecond > iFirst)
  {
    printf("%d is Greater\n", iSecond);
  }
  else
  {
    printf("Both are equal\n");
  }
}

int main()
{
  int iValue1 = 0;
  int iValue2 = 0;

  printf("Enter First number :\n");
  scanf("%d", &iValue1);

  printf("Enter Second number :\n");
  scanf("%d", &iValue2);

  CheckNumber(iValue1, iValue2);

  return EXIT_SUCCESS;
}