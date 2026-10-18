////////////////////////////////////
//
//Function Name : Display
//Description : It is used to print hello/demo
//Input : int
//Output : print
//Author : Vaishnavi Santosh Wanjale
//Date : 18/10/2026
//
////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{ 
  if(iNo < 10)
  {
    printf("Hello");
  }
  else
  {
    printf("Demo");
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