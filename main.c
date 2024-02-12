
#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

// int main(int arc , char **argv)
// {
// 	(void)arc;
// 	(void)argv;
// 	int nb = atoi(argv[2]);
// 	int i = ft_printf(argv[1],nb);
// 	write(1,"\n",1);
// 	int j = printf(argv[1],nb);
// 	printf("re:%d\n",i);
// 	printf("re:%d\n",j);
// 	return 0;
// }

int main() {

    unsigned int i = 155;
	//printf("re:%x\n",ft_itoa_hex(&i,'X'));
	printf("r:%d",printf("he:%p",&i));
	
    return 0;
}
