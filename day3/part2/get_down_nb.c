#include "day3.h"

long	get_down_nb(char **map, int line, int col)
{
	long	out;

	out = 0;
	if (line == LINE)
		return (0);
	if (col == 0)
		return (ft_get_full_nb(map, line + 1, col));
	if (ft_isdigit(map[line + 1][col]))
		return (ft_get_full_nb(map, line + 1, col - 1));
	else
	{
		if (out == 0)
			out = 1;
		out *= ft_get_full_nb(map, line + 1, col + 1);
		if (ft_isdigit(map[line + 1][col - 1]))
			out *= ft_get_full_nb(map, line + 1, col - 1);
	}
	return (out);
}