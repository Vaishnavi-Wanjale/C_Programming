////////////////////////////////////
//
//Function Name : Display
//Description : used to print numbers
//Input : None
//Output : printing
//Author : Vaishnavi Santosh Wanjale
//Date : 18/10/2026
//
////////////////////////////////////

#include<stdio.h>

void Display()
{
  int i = 0;
  i = 5;

  while(i >= 1)  // 5>=1  4>=1  3>=1 2>=1 1>=1 0>=1(false)
  {
    printf("%d ",i);  //5 4 3 2 1
    i--;  //4 3 2 1 0
  }

}

int main()
{
  Display();

  return 0;
}





// 5 4 3 2 1