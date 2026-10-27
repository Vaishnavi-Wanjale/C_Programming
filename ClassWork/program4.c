/*
Step 1: Understand the problem statement
Step 2: Write the algorithm
Step 3: Decide the programming Language
Step 4: Write the program 
Step 5: Test the program
*/ 
////////////////////////////////////////////////////////////////
//
//Step 1: Understand the problem statement
//        User is going to enter any 2 integers
//        and we have to perfrom addition
//
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//  Step 2: Write the algorithm
/*  START
      Accept the first number as No1
      Accept the second number as No2
      Create the variable as Ans to store the result
      Perform the addition and store into Ans
      Display the result from Ans
    END
 */
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//  Step 3: Decide the programming Language
//          We select C programming
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
// 
// Step 4: Write the program
// 
////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
  int iValue1, iValue2, iResult; //i mule kaltay integer value aahe

  printf("Enter first number:\n");
  scanf("%d",&iValue1);

  printf("Enter second number:\n");
  scanf("%d",&iValue2);

  iResult = iValue1 + iValue2;  //Business Logic
  
  printf("%d\n",iResult);

  return 0;
}