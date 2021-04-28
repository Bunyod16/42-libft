#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

int main(void)
{
	printf("TEST\n");
	printf("Isdigit 1 %d\n",ft_isdigit('1'));
	printf("Isdigit 1 %d\n",isdigit('1'));
	printf("Isalpha A %d\n",ft_isalpha('A'));
	printf("Isalpha A %d\n",isalpha('A'));
	printf("Isalnum A %d\n",ft_isalnum('A'));
	printf("Isalnum A %d\n",isalnum('A'));
	printf("Isascii A %d\n",ft_isascii('A'));
	printf("Isascii A %d\n",isascii('A'));
	printf("Isprint A %d\n",ft_isprint('A'));
	printf("Isprint A %d\n",isprint('A'));
	return(0);
}
