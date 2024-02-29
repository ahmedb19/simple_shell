#include "shell.h"

/**
 *_strdup - duplicates a string in a newly allocated space in memory
 *@str: Given string
 *
 *Return: Pointer to the duplicated string in memory, or NULL if str = NULL
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *s;

	if (str == NULL)
	{
		return ('\0');
	}
	else
	{
		for (j = 0; str[j] != '\0'; j++)
			;
		s = malloc(sizeof(char) * j + 1);

		if (s)
		{
			while (str[i] != '\0')
			{
				s[i] = str[i];
				i++;
			}
		}
		else
		{
			return ('\0');
		}
		s[i] = '\0';
		return (s);
	}
}

/**
 *_strcmp - compares two strings.
 *@s1: 1st string
 *@s2: 2nd string
 *
 *Return: 1 if true, otherwise 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = (((int)*s1 - 48) - ((int)*s2 - 48));
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}

/**
*_strlen - returns the length of a string
*@s: Pointer to a string
*
*Return: length of a string
*/
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}

/**
 *_strcpy - copies the string pointed to by src,
 *to the buffer pointed to by dest.
 *@dest: pointer to buffer
 *@src: pointer to string
 *
 *Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
*_strcat - concatenates two strings.
*@dest: 1st string
*@src: 2nd string
*
*Return: Pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
