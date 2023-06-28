#include "main.h"
/**
 * _atoi - nnknklnl hjgbhxgiyshvbh
 *
 * @s: bkjbjb bjbkb
 *
 * Return: nlkhkjhkjb knlknknkn
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	else if (*s >= '0' && *s <= '9')
	{
		num = (*s - '0');
		s++;
	}
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else
		{
			break;
		}
	s++;
	}

	return (num * sign);
}
