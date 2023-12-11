#include "day3.h"

void	ft_print_map(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (i < LINE)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			printf("%c", map[i][j]);
			j++;
		}
		i++;
	}
}

long	get_result(char **map)
{
	long	out;
	int	i;
	int	j;
	long	tmp;

	out = 0;
	i = 0;
	j = 0;
	tmp = 0;

	// printf("\n[%c] -> get_current_nb(map, %d, %d) : %d\n",map[i][j] ,i ,j , get_current_nb(map, i, j));
	while (i < LINE)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (map[i][j] == '*')
			{
				tmp = get_up_nb(map, i, j) * get_current_nb(map, i, j) * get_down_nb(map, i, j);
				out += tmp;
			}
			j++;
		}
		printf("[%ld] : %s", tmp, map[i]);
		i++;
	}
	return (out);
}

int	main(void)
{
	char	**map;
	int		i;
	int		j;
	long		res;
	int		nb;

	map = (char **)malloc(sizeof(char *) * (LINE + 1));
	if (!map)
		return (1);
	map[LINE] = NULL;
	ft_fill_map(map);
	// ft_print_map(map);
	res = get_result(map);
	printf("\nres = %ld\n", res);
	
	i = 0;
	while (i < LINE)
	{
		free(map[i]);
		i++;
	}
	free(map);
	return (0);
}

/*
tentative 1 : 525120
tentative 2 : 587405
tentative 3 : 459983
*/