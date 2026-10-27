#include<stdio.h>
#include<stdlib.h> //to include the macro named EXIT_SUCCESS

int main()
{
  char sName[30];
  
  printf("Enter your name : \n");
  scanf("%[^'\n']s",sName); // ^ = not. jovar user enter dabat nhi tovar input ghet raha. \n = new line
  // rejex regulr expression aahe he

  printf("Welcome %s\n", sName);


  return EXIT_SUCCESS;
}