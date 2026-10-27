/*
---------------------------------
        Operation ||
---------------------------------
Result1   Result2   Final Result
---------------------------------
TRUE        TRUE        TRUE (short circuit evaluation)
TRUE        FALSE       TRUE (short circuit evaluation)
FALSE       TRUE        TRUE (no short circuit evaluation)
FALSE       FALSE       FALSE(no short circuit evaluation)
---------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

void Check_Divisible(int iNo)
{
    if (((iNo % 3) == 0) || ((iNo % 5) == 0))
    {
        printf("Divisible by 3 or 5\n");
    }
    else
    {
        printf("Not divisible by 3 or 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Check_Divisible(iValue);

    return EXIT_SUCCESS;
}