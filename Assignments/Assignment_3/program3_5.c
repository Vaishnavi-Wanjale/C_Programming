#include <stdio.h>

typedef int BOOL;

#define true 1
#define false 0

BOOL ChkVowel(char CValue)
{
  if (CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' ||
      CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
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
  char cValue = '\0';
  BOOL bRet = false;

  printf("Enter character :\n");
  scanf("%c", &cValue);

  bRet = yChkVowel(cValue);

  if (bRet == true)

  {
    printf("%c is a Vowel", cValue);
  }
  else
  {
    printf("%c is not a Vowel", cValue);
  }

  return 0;
}