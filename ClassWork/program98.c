#include <stdio.h>
#include <stdlib.h>

// typedef existing_datatype new_datatype name;
typedef unsigned long long ULONG;
// typedef always capital liha and macro pn capital liha

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFact = 0;

    for (iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %lld\n", iRet);

    return EXIT_SUCCESS;
}
