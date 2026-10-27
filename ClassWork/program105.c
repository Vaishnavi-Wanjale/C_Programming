#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if (iSum == iNo)
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
    int iValue = 0;
    bool bRet = false; // 0

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if (bRet == true)
    {
        printf("Its a perfect number\n");
    }
    else
    {
        printf("Its not a perfect number\n");
    }

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2) order of N/2

// perfect number : factors chi summation same as input
