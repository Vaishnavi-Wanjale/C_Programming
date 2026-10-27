#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo) //hi fakta service aahe no product returned
{
  if((iNo%2) == 0)
  {
    printf("Its Even no");
  }
  else
  {
    printf("Its Odd no");
  }
}


int main()
{
  int iValue =0;

  printf("Enter the number :\n");
  scanf("%d",&iValue);

  CheckEven(iValue);



  return EXIT_SUCCESS;
}