#include "libft.h"
#include "string.h"
#include <stdio.h>

int	main(void)
{
	char *dest = "Destination";
	char *source = "Source";
	strlcpy(*dest,*source,12);
	printf("%s",dest);
}
