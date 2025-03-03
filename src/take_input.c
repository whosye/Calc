#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include"take_input.h"


char take_input_operator(bool* exit_flag) {
    char sign;

    while (1) {  
        printf("Insert operation sign (+, -, *, /) or Q to quit: ");

        scanf(" %c", &sign);  

        if (sign == 'Q' || sign == 'q') {
            *exit_flag = true;
            return 'q';
        }

        if (sign == '+' || sign == '-' || sign == '*' || sign == '/') {
            return sign;
        }

        printf("Not a valid operator! Try again.\n");
    }
}

int take_input_number(bool* exit_flag) {
    char number[200];

    while (1) { 
        printf("Insert number or Q to quit: ");

        scanf("%199s", number);

        if (number[0] == 'Q' || number[0] == 'q') {
            *exit_flag = true;
            return -1;
        }

        bool is_valid = true;
        for (char *ptr = number; *ptr; ptr++) {
            if (!isdigit(*ptr)) {
                is_valid = false;
                break;
            }
        }

        if (is_valid) {
            return atoi(number); 
        }

        printf("Not a valid number! Try again.\n");
    }
}
