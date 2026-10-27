#include<stdio.h>

#include<stdlib.h> //have EXIT_SUCCESS and EXIT_FAILURE

int main()
{
  int no =0; 

  printf("Enter number\n");

  if(scanf("%d",&no) != 1)
  {

    fprintf(stderr,"Invalid input\n");
    //stderr ha pn output deto console vrtich.
    //stdi stdo and stderr 
    
    return EXIT_FAILURE; //abnormally terminate hoto
  }

  printf("Input is Valid\n");

  return EXIT_SUCCESS;
}