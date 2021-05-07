#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char *string = "Hello World";
	char *res = ft_strrchr(string,'\0');	
	printf("%s\n",res-1);
	res = ft_strrchr(string,10);
	printf("%s",res-1);
}
