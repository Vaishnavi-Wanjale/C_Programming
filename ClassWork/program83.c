#include<stdio.h>
#include<stdlib.h>

void Check_Divisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("Divisible by 3\n");
    }
    else
    {
        printf("Not divisible by 3\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Check_Divisible(iValue);

    return EXIT_SUCCESS;
}