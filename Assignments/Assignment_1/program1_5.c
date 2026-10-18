////////////////////////////////////
//
//Function Name : Accept
//Description : used to print *
//Input : int
//Output : printing
//Author : Vaishnavi Santosh Wanjale
//Date : 18/10/2026
//
////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
  int iCnt = 0;

  for(iCnt = 1; iCnt <= iNo ; iCnt++)
  //1 1<=5 2<=5 3<=5 4<=5 5<=5
  {
    printf("* ");
  }
}


int main()
{
  int iValue = 0;
  iValue = 5;

  Accept(iValue);

  return 0;
}