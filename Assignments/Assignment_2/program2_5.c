////////////////////////////////////
//
//Function Name : ChkEven
//Description : even or odd
//Input : int
//Output : bool
//Author : Vaishnavi Santosh Wanjale
//Date : 18/10/2026
//
////////////////////////////////////

#include<stdio.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
  if((iNo % 2) == 0)
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
  BOOL bRet = false;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  bRet = ChkEven(iValue);

  if(bRet == true)
  {
    printf("%d is a even number\n",iValue);
  }
  else{
    printf("%d is a odd number\n",iValue);
  }

  

  return 0;
}