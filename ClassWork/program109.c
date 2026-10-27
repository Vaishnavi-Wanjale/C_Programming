#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if (iSum == 1)
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
    bool bRet = false;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if (bRet) // ithe pan true aahe condition, ha pn ek prakar ahe lihaycha
    {
        printf("Its a prime number\n");
    }
    else
    {
        printf("Its not a prime number\n");
    }

    return EXIT_SUCCESS;
}

// int main(void)
// {
// same aahe.
// main function kontich value accept karnar nhiye.fakta return kartoy int
// }

// prime number = asa number jo 1 and swatahalch divide hoto fakta