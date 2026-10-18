#include <stdio.h>

void DisplayConvert(char CValue)
{
  if (CValue >= 'a' && CValue <= 'z')
  {
    CValue = CValue - 32;
    printf("%c\n", CValue);
  }
  else if (CValue >= 'A' && CValue <= 'Z')
  {
    CValue = CValue + 32;
    printf("%c\n", CValue);
  }
  else
  {
    printf("Invalid input\n");
  }
}

int main()
{
  char cValue = '\0';

  printf("Enter character :\n");
  scanf("%c", &cValue);

  DisplayConvert(cValue);

  return 0;
}