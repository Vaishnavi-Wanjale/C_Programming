#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
  int iCnt = 0;

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("Jay Ganesh...\n");
  }
}
// try updater and filter

int main()
{
  int iValue = 0;

  printf("Enter the frequency : \n");
  scanf("%d", &iValue);

  // Input filter
  // if (iValue <= 0)
  // {
  //   printf("Invalid Input\n");
  // }

  // Input Updater
  if (iValue < 0)
  {
    iValue = -iValue;
  }

  Display(iValue);
  return EXIT_SUCCESS;
}
