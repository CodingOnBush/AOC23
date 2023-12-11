#include "day3.h"

long	get_current_nb(char **map, int line, int col)
{
	long	out;

	out = 0;
	if (col == 0)
		return (ft_get_full_nb(map, line, col + 1));
	else if (map[line][col + 1] == '\0')
		return (ft_get_full_nb(map, line, col - 1));
	else
	{
		if (ft_isdigit(map[line][col + 1]))
		{
			out = 1;
			out *= ft_get_full_nb(map, line, col + 1);
		}
		if (ft_isdigit(map[line][col - 1]))
		{
			if (out == 0)
				out = 1;
			out *= ft_get_full_nb(map, line, col - 1);
		}
	}
	return (out);
}