#include "day2.h"

int	ft_get_gameid(char *line)
{
	int		i;
	int		id;
	char	*substr;

	i = 0;
	id = 0;
	line = line + 4;
	substr = malloc(sizeof(char) * 4);
	if (!substr)
		return (-1);
	substr[0] = '\0';
	substr[1] = '\0';
	substr[2] = '\0';
	substr[3] = '\0';
	while (*line != ':')
	{
		substr[i] = *line;
		i++;
	}
	id = ft_atoi(substr);
	return (id);
}