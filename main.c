
#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int arc , char ** argv)
{
	(void)arc;
	(void)argv;
	//char *p = "character:%c text:%s pointer:%p integer:%d hex:%x hex:%X %%";
	//char *p = "pointer:%p";
	//char *text = "test";
    char *p = "xxxxxxx";
    printf("%d",ft_ppointer(p,HEX_MIN));
	return 0;
}
