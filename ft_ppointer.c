#include "libftprintf.h"
#include <stdio.h>


int ft_ppointer(void *p)
{
	unsigned long nb;

	nb = (unsigned long)p;
    printf("%lu",nb);

	return	0;
}
