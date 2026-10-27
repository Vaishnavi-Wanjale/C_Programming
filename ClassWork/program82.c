// Input : 10
// 1 3 5 7 9

#include <stdio.h>
#include <stdlib.h>

int Summation(int iNo)
{
  int iCnt = 0;
  int iSum = 0;

  iSum = 1;

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    iSum = iSum * iCnt;
  }
  return iSum;
}

/*
isum = 1,icnt =1
isum = 1 * 1 ->1
icnt = 2
2<=4
isum = 1 * 2 ->2
icnt =3
3<=4
isum = 2 * 3 ->6
icnt = 4
isum = 6 * 4 ->24
icnt = 5
*/

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the frequency : \n");
  scanf("%d", &iValue);

  iRet = Summation(iValue);

  printf("Summation is : %d\n", iRet);

  return EXIT_SUCCESS;
}
