#include <stdio.h>
#include <stdlib.h>
// Summation of Factors
int SumFactors(int iNo)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);
    printf("Summation of Factors is : %d\n", iRet);

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2) order of N/2

//perfect number : factors chi summation same as factor input
