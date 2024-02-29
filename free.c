#include "shell.h"

/**
 *freearr - frees array
 *@s: String
 *
 */

void freearr(char **s)
{
	int i;

	if (!s)
		return;
	for (i = 0; s[i]; i++)
		free(s[i]), s = NULL;
	free(s), s = NULL;
}
