
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
	int i = 15656;
    //char *p = "xxxxxxx";
    ft_ppointer(&i);
   
	return 0;
}
