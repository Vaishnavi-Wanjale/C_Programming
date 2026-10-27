#include<stdio.h>
#include<stdlib.h> //to include the macro named EXIT_SUCCESS

int main()
{
  char sName[30];
  
  printf("Enter your name : \n");
  scanf("%s",sName); //address lihava lagat nhi becoz array name points to base address of first element
  //scanf only accepts till space. tya pudhcha nhi ghet kahich

  printf("Welcome %s\n", sName);


  return EXIT_SUCCESS;
}