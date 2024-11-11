#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main(void)
{
	int fd = open("test.txt", O_RDONLY);
	char *test;
	printf("before get");
	test = get_next_line(fd);	
	printf("after get : %s", test);
	return (0);
}