#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
  int iDigit = 0;

  while (iNo != 0)
  {
    iDigit = iNo % 10;

    if (iDigit == 0)
    {
      return TRUE;
    }
    iNo = iNo / 10;
  }
}

int main()
{
  int iValue = 0;
  int bRet = FALSE;

  printf("Enter number : \n");
  scanf("%d", &iValue);

  bRet = ChkZero(iValue);

  if (bRet == TRUE)
  {
    printf("It contains Zero\n");
  }
  else
  {
    printf("There is no Zero\n");
  }

  return EXIT_SUCCESS;
}