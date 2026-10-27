// input : 6457 -> sum = 22  avg = 22/4 = 5.5
// input : 45   -> sum = 9  avg =  9/2 = 4.5
// input : 734  -> sum = 14  avg = 14/3= 4.6

#include <stdio.h>
#include <stdlib.h>

float AverageDigits(int iNo)
{
  int iDigit = 0, iSum = 0, iCount = 0;
  float fAvg = 0.0f;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    iSum = iSum + iDigit;
    iCount++;
    iNo = iNo / 10;
  }
  fAvg = (float)iSum / (float)iCount;

  return fAvg;
}

int main()
{
  int iValue = 0;
  float fRet = 0.0f;

  printf("Enter number : \n");
  scanf("%d", &iValue);

  fRet = AverageDigits(iValue);

  printf("average of digits : %.2f\n", fRet); // width specifier

  return EXIT_SUCCESS;
}
