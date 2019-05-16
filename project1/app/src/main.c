#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "calculator.h"

int main (int argc, char *argv[])
{
    int  num1;
    int  num2;
    int  result;
    char sign;

    if (argc != 4)
    {
        printf("Please pass 3 arguments: <number1> <sign> <number2>\n");
    }
    else 
    {
        num1   = atoi(argv[1]);
        sign   = *(argv[2]);
        num2   = atoi(argv[3]);

        result = calculator(num1, sign, num2);

        if ((num2 < 0) && (sign == '-'))
        {
            printf("%d%c%d = %d\n", num1, '+', abs(num2), result); 
        }
        else if ((num2 < 0) && (sign == '+'))
        {
            printf("%d%d = %d\n", num1, num2, result); 
        }
        else
        {
            printf("%d%s%d = %d\n", num1, argv[2], num2, result); 
        }
    }
    return 0;
}
