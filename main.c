#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	int fd = open("test.txt", O_RDONLY);
	char *test;
<<<<<<< HEAD
	printf("before get");
	test = get_next_line(fd);	
	printf("after get : %s", test);
=======

	if (fd == -1) {
		perror("Error opening file");
		return (1);
	}
	printf("--%s--\n", test = get_next_line(fd));
	printf("================\n");
	printf("--%s--\n", test = get_next_line(fd));
	printf("================\n");
	printf("--%s--\n", test = get_next_line(fd));
	printf("================\n");
	printf("--%s--\n", test = get_next_line(fd));
	printf("================\n");
	close(fd);
>>>>>>> bc101de56d606e50406e3c3d6902275c5c0bdf4a
	return (0);
}