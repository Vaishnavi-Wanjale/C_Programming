#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
  if (fMarks <= 0 || fMarks > 100)
  {
    printf("Inavlid Marks\n");
    return;
  }

  if (fMarks >= 90 && fMarks <= 100)
  {
    printf("Your Grade is A\n");
  }
  else if (fMarks >= 75 && fMarks <= 89)
  {
    printf("Your Grade is B\n");
  }
  else if (fMarks >= 60 && fMarks <= 74)
  {
    printf("Your Grade is C\n");
  }
  else if (fMarks >= 40 && fMarks <= 59)
  {
    printf("Your Grade is D\n");
  }
  else
  {
    printf("Your are fail");
  }
}

int main()
{
  float fMarks = 0.0f;

  printf("Enter your marks : \n");
  scanf("%f", &fMarks);

  DisplayGrade(fMarks);

  return EXIT_SUCCESS;
}