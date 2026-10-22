#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
  if (iAge <= 0)
  {
    printf("Invalid Age\n");
    return;
  }

  if (iAge >= 18)
  {
    printf("You are Eligible for voting\n");
  }
  else
  {
    printf("Not Eligible to vote\n");
  }
}

int main()
{
  int iAge = 0;

  printf("Enter your age :\n");
  scanf("%d", &iAge);

  CheckVotingEligibility(iAge);

  return EXIT_SUCCESS;
}