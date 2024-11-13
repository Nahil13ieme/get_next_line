#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	int fd = open("test.txt", O_RDONLY);
	char *test;

	if (fd == -1) {
		perror("Error opening file");
		return (1);
	}
	printf(" LINE == --%s--\n", test = get_next_line(fd));
	printf("================\n");
	printf(" LINE == --%s--\n", test = get_next_line(fd));
	printf("================\n");
	printf(" LINE == --%s--\n", test = get_next_line(fd));
	printf("================\n");
	printf(" LINE == --%s--\n", test = get_next_line(fd));
	printf("================\n");
	printf(" LINE == --%s--\n", test = get_next_line(fd));
	printf("================\n");
	printf(" LINE == --%s--\n", test = get_next_line(fd));
	printf("================\n");
	printf(" LINE == --%s--\n", test = get_next_line(fd));
	printf("================\n");
	free(test);
	close(fd);
	return (0);
}