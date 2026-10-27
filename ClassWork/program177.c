// 8998 pallindrome
// 14341 pallindrome
// 7007 pallindrome

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPallindrome(int iNo)
{
  int iDigit = 0, iRev = 0, iTemp = 0;
  iTemp = iNo; // iNo cha backup ghetla iTemp madhe

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    iRev = (iRev * 10) + iDigit;
    iNo = iNo / 10;
  }

  if (iRev == iTemp) // issue solved
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter number : \n");
  scanf("%d", &iValue);

  bRet = CheckPallindrome(iValue);

  if (bRet == true)
  {
    printf("number is a pallindrome\n");
  }
  else
  {
    printf("number is not pallindrome\n");
  }

  return EXIT_SUCCESS;
}
