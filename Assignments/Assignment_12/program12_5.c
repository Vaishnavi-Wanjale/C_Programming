#include <stdio.h>
#include <stdlib.h>

int Count(int iNo)
{
  int iFreq = 0, iDigit = 0;

  while (iNo != 0)
  {
    iDigit = iNo % 10;

    if (iDigit < 6)
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

  iRet = Count(iValue);

  printf("Frequency : %d ", iRet);

  return EXIT_SUCCESS;
}