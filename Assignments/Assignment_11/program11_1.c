#include <stdio.h>
#include <stdlib.h>

void RangeDisplay(int iStart, int iEnd)
{
  int iCnt = 0;
  // 1. Check for invalid range FIRST, before starting the loop
  if (iStart > iEnd)
  {
    printf("Invalid Range\n");
    return; // Exit the function early
  }
  for (iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
    printf("%d ", iCnt);
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter starting point : \n");
  scanf("%d", &iValue1);

  printf("Enter ending point : \n");
  scanf("%d", &iValue2);

  RangeDisplay(iValue1, iValue2);

  return EXIT_SUCCESS;
}