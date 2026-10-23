////////////////////////////////////
//
// Function Name : ChkEven
// Description : even or odd
// Input : int
// Output : bool
// Author : Vaishnavi Santosh Wanjale
// Date : 18/10/2026
//
////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
  if ((iNo % 2) == 0)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}

int main()
{
  int iValue = 0;
  BOOL bRet = FALSE;

  printf("Enter number : \n");
  scanf("%d", &iValue);

  bRet = ChkEven(iValue);

  if (bRet == TRUE)
  {
    printf("%d is a even number\n", iValue);
  }
  else
  {
    printf("%d is a odd number\n", iValue);
  }

  return 0;
}