#include "shell.h"

/**
 * interactive - if shell is interactive returns true
 * @info: address structure
 *
 * Return: 1 if interactive or 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if it is a delimeter
 * @c: the char checked
 * @delim: the delimeter
 * Return: 1 if true or 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 *_isalpha -  alphabetic character checked
 *@c: Inputted character
 *Return: 1 if c is alphabetic or else, 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - string converted to an integer
 *@s: converted string
 *Return: 0 if no numbers in string otherwise converted number
 */

int _atoi(char *s)
{
	int d, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (d = 0;  s[d] != '\0' && flag != 2; d++)
	{
		if (s[d] == '-')
			sign *= -1;

		if (s[d] >= '0' && s[d] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[d] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
