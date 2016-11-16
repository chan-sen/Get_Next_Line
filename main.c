#include "get_next_line.h"

int		main(int argc, char **argv)
{
	char 	*line;
	int		fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (get_next_line(fd, &line) == 1)
		{
			ft_putstr(line);
		}
		return (1);
	}
	return (0);
}
