#include <stdio.h>
#include <stdlib.h>

int CountFour(int iNo)
{
  int iFreq = 0, iDigit = 0;

  while (iNo != 0)
  {
    iDigit = iNo % 10;

    if (iDigit == 4)
    {
      iFreq++;
    }
    iNo /= 10;
  }

  return iFreq;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number : \n");
  scanf("%d", &iValue);

  iRet = CountFour(iValue);

  printf("Frequency of 2 is : %d ", iRet);

  return EXIT_SUCCESS;
}