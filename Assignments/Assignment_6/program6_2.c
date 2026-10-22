#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
  if (iAge < 0 || (fMarks < 0 || fMarks > 100))
  {
    printf("Marks and age are invalid\n");
    return;
  }
  if ((fMarks >= 60) && (iAge >= 17))
  {
    printf("Eligible for Addmission\n");
  }
  else
  {
    printf("Not Eligible for Addmission\n");
  }
}

int main()
{
  float fMarks = 0.0f;
  int iAge = 0;

  printf("Enter marks and age : \n");
  scanf("%f %d", &fMarks, &iAge);

  CheckAdmission(fMarks, iAge);

  return EXIT_SUCCESS;
}
