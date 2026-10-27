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

int Addition(int iNo1,int iNo2)
{
  int iAns=0; //dukandar chi swatachi pishavi aahe tyat user kadun data ghenar
  // tya var addition perform krnar

  iAns = iNo1 + iNo2; //Business Logic

  return iAns; //ani ithe ti addition return karnar
}

int main()
{
  int iValue1=0, iValue2=0, iResult=0; //i mule kaltay integer value aahe

  printf("Enter first number:\n");
  scanf("%d",&iValue1);

  printf("Enter second number:\n");
  scanf("%d",&iValue2);

  iResult = Addition(iValue1,iValue2); //ithe addition iResult madhe store honar
  
  printf("Addition is : %d\n",iResult);

  return 0;
}