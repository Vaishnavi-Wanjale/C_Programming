////////////////////////////////////
//
//Function Name : Check
//Description : It is used to check if a no is divisible by 5
//Input : int
//Output : int
//Author : Vaishnavi Santosh Wanjale
//Date : 18/10/2026
//
////////////////////////////////////

#include<stdio.h>

//typedef existing_datatype new_datatype
typedef int BOOL;
#define true 1
#define false 0

BOOL Check(int iNo)
{
  if((iNo % 5) == 0)
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
  BOOL bRet = false; //0

  printf("Enter number :\n");
  scanf("%d", &iValue);

  bRet = Check(iValue);

  if(bRet == true)
  {
    printf("Divisible by 5");
  }
  else
  {
    printf("Not Divisible by 5");
  }

  return 0;
}