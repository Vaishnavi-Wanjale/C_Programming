#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
  float fDiscount = 0.0f;
  float fFinalAmount = 0.0f;

  if (fAmount < 0)
  {
    printf("Invalid amount\n");
    return;
  }

  if (fAmount < 1000)
  {
    printf("Payable Amount = %.2f", fAmount);
  }
  else if ((fAmount >= 1000) && (fAmount < 5000))
  {
    fDiscount = fAmount * 0.1;
    printf("Payable Amount = %.2f", fAmount - fDiscount);
  }
  else
  {
    fDiscount = fAmount * 0.2;
    printf("Payable Amount = %.2f", fAmount - fDiscount);
  }
}

int main()
{
  float fAmount = 0.0f;

  printf("Enter purchase amount : \n");
  scanf("%f", &fAmount);

  CalculateDiscount(fAmount);

  return EXIT_SUCCESS;
}
