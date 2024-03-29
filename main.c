#include "ft_printf.h"
#include <stdio.h>

//cspdiuxX%
int main(void)
{
    int *p = NULL;
	char *str = "test";
    char *str2 = NULL;
	ft_printf(" c:%d\n",ft_printf("%c xx", 55));
    printf(" c:%d\n",printf("%c xx", 55));
    ft_printf(" c:%d\n",ft_printf("%s xx", str));
    printf(" c:%d\n",printf("%s xx", str));
    ft_printf(" c:%d\n",ft_printf("%s xx", str2));
    printf(" c:%d\n",printf("%s xx", str2));
    ft_printf(" c:%d\n",ft_printf("%p xx", p));
    printf(" c:%d\n",printf("%p xx", p));
    ft_printf(" c:%d\n",ft_printf("%p xx", &str[0]));
    printf(" c:%d\n",printf("%p xx", &str[0]));
    ft_printf(" c:%d\n",ft_printf("%d xx", 888));
    printf(" c:%d\n",printf("%d xx", 888));
    ft_printf(" c:%d\n",ft_printf("%i xx", INT_MIN));
    printf(" c:%d\n",printf("%i xx", INT_MIN));
    ft_printf(" c:%d\n",ft_printf("%u xx", 1234567));
    printf(" c:%d\n",printf("%u xx", 1234567));
    ft_printf(" c:%d\n",ft_printf("%x xx", 9989898));
    printf(" c:%d\n",printf("%x xx", 9989898));
    ft_printf(" c:%d\n",ft_printf("%X xx", 9989898));
    printf(" c:%d\n",printf("%X xx", 9989898));
    ft_printf(" c:%d\n",ft_printf("%% xx"));
    printf(" c:%d\n",printf("%% xx"));
    ft_printf("\n");
    ft_printf(" c:%d\n",ft_printf("cspdiuxX%"));
    printf(" c:%d\n",printf("cspdiuxX%"));
    ft_printf(" c:%d\n",ft_printf("%"));
    printf(" c:%d\n",printf("%"));
    ft_printf(" c:%d\n",ft_printf("%%%%%%%"));
    printf(" c:%d\n",printf("%%%%%%%"));
    ft_printf(" c:%d\n",ft_printf("aaaaa\0aaaa"));
    printf(" c:%d\n",printf("aaaaa\0aaaa"));
	ft_printf(" c:%d\n",ft_printf("aaaa%?"));
	printf(" c:%d\n",printf("aaaa%?"));
    return 0;
}
