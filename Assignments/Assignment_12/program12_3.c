#include <stdio.h>
#include <stdlib.h> 

int CountTwo(int iNo)
{
  int iFreq = 0, iDigit = 0;

  while (iNo != 0)
  {
    iDigit = iNo % 10;

    if (iDigit == 2)
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

  iRet = CountTwo(iValue);

  printf("Frequency of 2 is : %d ", iRet);

  return EXIT_SUCCESS;
}