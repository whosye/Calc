#include<stdio.h>
#include"take_input.h"
#include"get_result.h"
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
	
	int res = get_result(num1, num2, operator); 

	printf("RESULT == %d\n", res);
	printf("\n");

	}

	return 0;
}
