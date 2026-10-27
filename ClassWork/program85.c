/*
---------------------------------
        Operation &&
---------------------------------
Result1   Result2   Final Result
---------------------------------
TRUE        TRUE        TRUE
TRUE        FALSE       FALSE
FALSE       TRUE        FALSE (short circuit evaluation mnje pahila false asel tr next wala condition check nahi karat)
FALSE       FALSE       FALSE (short circuit evaluation)
---------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

void Check_Divisible(int iNo)
{
    if (((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("Divisible\n");
    }
    else
    {
        printf("Not divisible\n");
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