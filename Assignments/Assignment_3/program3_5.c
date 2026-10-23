#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
  if (CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' ||
      CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}

int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter character :\n");
  scanf("%c", &cValue);

  bRet = yChkVowel(cValue);

  if (bRet == TRUE)

  {
    printf("%c is a Vowel", cValue);
  }
  else
  {
    printf("%c is not a Vowel", cValue);
  }

  return 0;
}