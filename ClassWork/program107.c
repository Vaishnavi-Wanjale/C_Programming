#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void CheckPrime(int iNo)
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
        printf("Its a prime number\n");
    }
    else
    {
        printf("Its not a prime number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}

// int main(void)
// {
// same aahe.
// main function kontich value accept karnar nhiye.fakta return kartoy int
// }

//prime number = asa number jo 1 and swatahalch divide hoto fakta