#include<stdio.h>
#include"../include/get_result.h"




int get_result(int num1, int num2, char op)
{
    switch (op)
    {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0)
                return num1 / num2;
            else
                return 0; 
        default:
            return 0;  
    }
}

