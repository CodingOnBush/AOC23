#include "day3.h"

int	ft_is_symbol(char c)
{
	char *symbols;

	symbols = "=&*-$/%%@+#";
	if (c == '=' || c == '&' || c == '*')
		return (1);
	if (c == '-' || c == '$' || c == '/')
		return (1);
	if (c == '%' || c == '@' || c == '+' || c == '#')
		return (1);
	return (0);
}