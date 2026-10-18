////////////////////////////////////
//
//Function Name : Display
//Description : It is used to print no
//Input : int
//Output : int
//Author : Vaishnavi Santosh Wanjale
//Date : 18/10/2026
//
////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{ 
  //Write Updater
  if(iNo < 0)
  {
    iNo = -iNo;
  }

  while(iNo >= 1)
  {
    printf(" * ");
    iNo--;
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