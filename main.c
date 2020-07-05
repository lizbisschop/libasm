#include <stdio.h>
#include "libasm.h"

int main (void)
{
	int i;
	const char *line = "Hello-World";
	i =	ft_strlen(line);
	printf("%d\n", i);
	return (0);
}