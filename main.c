
#include "printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int arc , char ** argv)
{
	(void)arc;
	(void)argv;
	// char *p = "integer:%i uns:%u hex:%X %";
	// char *text = "test";
	int i = -15852;
	ft_printf("res:%z",i);
	return 0;
}
