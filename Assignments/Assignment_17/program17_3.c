/*
    Display
    a  b  c  d  e
    1  2  3  4  5
    a  b  c  d  e
    1  2  3  4  5
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i =0, j = 0;
    int iNum = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {

        for(j = 1, ch = 'a' ,  iNum = 1; j <= iCol; j++)
            {
                if((i % 2)==0)
                {
                    printf("%d\t",iNum);
                    iNum++;    
                }
               else
               {
                printf("%c\t",ch);
                     ch++;
               }   
            }
            printf("\n\n");
        }
        
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columnd\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}