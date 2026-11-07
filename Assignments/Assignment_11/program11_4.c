#include <stdio.h>
#include <stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
  int iCnt = 0;
  int iSum = 0;

  if ((iStart > iEnd) || (iStart < 0 || iEnd < 0))
  {
    printf("Invalid Range\n");
    return -1;
  }
  for (iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
    if (iCnt % 2 == 0)
    {
      iSum = iSum + iCnt;
    }
  }

  return iSum;
}

int main()
{
  int iValue1 = 0, iValue2 = 0, iRet = 0;

  printf("Enter starting point : \n");
  scanf("%d", &iValue1);

  printf("Enter ending point : \n");
  scanf("%d", &iValue2);

  iRet = RangeSumEven(iValue1, iValue2);

  // Only print the addition if the range was valid!
  if (iRet != -1)
  {
    printf("Addition is %d\n", iRet);
  }

  return EXIT_SUCCESS;
}