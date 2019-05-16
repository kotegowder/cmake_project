#include<calculator.h>

int calculator (int num1, char sign, int num2)
{
    switch(sign)
    {
        case '+': return (num1 + num2);
        case '-': return (num1 - num2);
        case 'x': return (num1 * num2);
        case '/': return (num1 / num2);
        default:
            printf("You passed invalid sign as argument\n");
            return 0;
    }
}
