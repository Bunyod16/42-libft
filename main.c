#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char *string = "Hello World";
	char *c = "o";
	char *res = ft_strchr(string,111);	
	printf("%d",res[0]);
}
