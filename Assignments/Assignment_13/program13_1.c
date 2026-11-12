#include <stdio.h>
#include <stdlib.h>

int CountEven(int iNo)
{
  int iFreq = 0, iDigit = 0;

  while (iNo != 0)
  {
    iDigit = iNo % 10;

    if (iDigit % 2 == 0)
    {
      iFreq++;
    }

    iNo = iNo / 10;
  }

  return iFreq;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number : \n");
  scanf("%d", &iValue);

  iRet = CountEven(iValue);

  printf("Frequency of Even digits : %d\n", iRet);

  return EXIT_SUCCESS;
}