#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> //contains boolean datatype

bool CheckEven(int iNo) //hi fakta service aahe no product returned
{
  if((iNo%2) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}


int main()
{
  int iValue = 0;
  bool bRet = false; //default value of boolean is false

  printf("Enter the number :\n");
  scanf("%d",&iValue);

  bRet = CheckEven(iValue);

  if(bRet == true)
  {
    printf("Its even no\n");
  }
  else{
    printf("Its odd no\n");
  }

  return EXIT_SUCCESS;
}