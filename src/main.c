#include<stdio.h>
#include"take_input.c"
#include <stdlib.h>

int main()
{
	while (true)
	{
	bool flag = false; 
	bool *flag_ptr = &flag;
	int num1 = take_input_number(flag_ptr);
	if (flag)
	{
		return -1;
	}

	char operator = take_input_operator(flag_ptr);
        if (flag) {return -1;}

	int num2 = take_input_number(flag_ptr);
	if (flag){return -1;}

	printf("got this %d %c %d\n", num1, operator, num2);

	}

	return 0;
}
