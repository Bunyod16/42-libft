#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s1[20];
	bzero(s1,20);
	printf("%ld",strlcat(s1,"123",0));
	printf("%s",s1);
}
