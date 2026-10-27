#include<stdio.h>
#include<stdlib.h> //have EXIT_SUCCESS

int main()
{
  int ret =0;
  int no =0; 

  printf("Enter number\n");
  ret = scanf("%d",&no);

  printf("Return value is : %d\n",ret);
  
  return EXIT_SUCCESS;
}