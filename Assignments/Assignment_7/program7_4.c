#include <stdio.h>

void OddDisplay(int iNo)
{
  int iCnt = 0;

  for (iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
  {
    printf("%d\t", iCnt);
  }

  /*
  for (iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
  {
    if(iNo % 2 != 0)
    {
      printf("%d\t", iCnt);
    }
  }
  */
}

int main()
{
  int iValue = 0;

  printf("Enter number : ");
  scanf("%d", &iValue);

  OddDisplay(iValue);

  return 0;
}