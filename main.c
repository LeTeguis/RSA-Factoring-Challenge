#include "factors.h"

/**
 * main - entry point
 *
 * @argc: param number + 1
 * @argv: param
 *
 * Description: main
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int fd = open(argv[1], O_RDONLY);
		char *line;

		if (fd == -1)
		{
			printf("error to open file %s\n", argv[1]);
			exit(98);
		}
		while (1)
		{
			size_t n = 0;
			ssize_t result = _getline(fd, &line, &n);

			if (result > 0 && line != 0)
			{
				uli number = atoi(line);
				uli d = diviseur1(number);

				printf("%d=%d*%d\n", number, number / d, d);
				free(line);
				continue;
			}
			break;
		}
	}
	return (0);
}
