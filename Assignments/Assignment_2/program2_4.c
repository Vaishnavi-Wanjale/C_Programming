////////////////////////////////////
//
//Function Name : Display
//Description : printing numbers
//Input : int
//Output : int
//Author : Vaishnavi Santosh Wanjale
//Date : 18/10/2026
//
////////////////////////////////////

#include<stdio.h>

void Display(int iNo,int iFrequency)
{ 
  int iCnt = 0;
  
  //write updater
  if(iFrequency < 0)
  {
    iFrequency = -iFrequency;
  }

  for(iCnt = 1; iCnt <= iFrequency; iCnt++)
  {
    printf("%d ", iNo);
  }
  

}

int main()
{
  int iValue = 0;
  int iCount = 0;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  printf("Enter frequency : \n");
  scanf("%d",&iCount);

  Display(iValue,iCount);

  return 0;
}