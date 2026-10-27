#include <stdio.h>
#include <stdlib.h>

void Check_Divisible(int iNo)
{
    //return kara boolean
    if (((iNo % 3) == 0))
    {
        if (((iNo % 5) == 0))
        {
            printf("Divisible\n");
        }
        else
        {
            printf("Not divisible\n");
        }
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