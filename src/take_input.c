#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>


char take_input_operator(bool* exit_flag)
{
	 
	while(true)
	{
	char sign;
	printf("insert operations sign + - / * \n");
	printf("Or to quit inser Q");
	scanf("%c", &sign);

	if (sign != '+' && sign != '-' && sign != '*' && sign != '/')
	{
		printf("not a valid operator\n");
	       	if(sign == 'Q' || sign == 'q')
		{

	
		return 'q';
		}
	}
	else
	{
		return sign; 
	}

	}

}



int take_input_number(bool* exit_flag)
	
{
	bool exit = false;
	while(!exit)
	{

			
	char number[200];
	char *ptr = number;
	printf("Insert number or to Quit insert Q\n");
	scanf("%199s", number);
	bool  val = true;
	while(*ptr)
	{

		if (number[0] == 'Q' || number[0] == 'q')
	       	{
			*exit_flag = true;
			 return -1; 
                }
		val = isdigit(*ptr);
		if (!val)
		{
			
			printf("Not a number!\n");
			break;
		}
		ptr++; 	
	}

	if (val)
	{
		return atoi(number);

	}




	}


}
