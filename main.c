#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int *p = NULL;
	char *str = "test";
	printf("r:%d\n",printf("p:%s c:%c p:%p pp:%p d:%d i:%i u:%u x:%x X:%X y:%%",NULL , 52 , p , &str[0]  , INT_MAX , INT_MIN , 123456 , 34567890, 34567890));
    ft_printf("r:%d",ft_printf("p:%s c:%c p:%p pp:%p d:%d i:%i u:%u x:%x X:%X y:%%",NULL , 52 , p ,&str[0] , INT_MAX , INT_MIN , 123456 , 34567890, 34567890));
    return 0;
}
