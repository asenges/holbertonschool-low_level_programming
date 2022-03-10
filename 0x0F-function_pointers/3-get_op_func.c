#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func -function
 * Return: int
 * @s: char
 *
 * Description:
 * Author: Alex Senges
 * Date: 9, Mar 2022
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL
		}
	};
	int i;

	while (i < 5 && !s[1])
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);

}

