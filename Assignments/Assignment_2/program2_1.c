////////////////////////////////////
//
//Function Name : Divide
//Description : It is used to divide
//Input : int , int
//Output : int
//Author : Vaishnavi Santosh Wanjale
//Date : 18/10/2026
//
////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{ 
  int iCnt = 0;
  iCnt = 1;
  //Write Updater
  if(iNo < 0)
  {
    iNo = -iNo;
  }

  while(iCnt <= iNo)
  {
    printf(" * ");
    iCnt++;
  }

}

int main()
{
  int iValue = 0;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  Display(iValue);

  return 0;
}