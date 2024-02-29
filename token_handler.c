#include "shell.h"

/**
*token_handler - handles strings
*@line: String
*
*Return: Double ptr
*/

char **token_handler(char *line)
{
	char *token = NULL, *tmp = NULL;
	char **cmd = NULL;
	int i = 0, j = 0;

	if (!line)
		return (NULL);

	tmp = _strdup(line);
	token = strtok(tmp, DLM);
	if (token == NULL)
	{
		free(line), line = NULL;
		free(tmp), tmp = NULL;
		return (NULL);
	}

	while (token)
	{
		i++;
		token = strtok(NULL, DLM);
	}
	free(tmp), tmp = NULL;

	cmd = malloc(sizeof(char *) * (i + 1));
	if (!cmd)
	{
		free(line), line = NULL;
		return (NULL);
	}

	token = strtok(line, DLM);
	while (token)
	{
		cmd[j] = _strdup(token);
		token = strtok(NULL, DLM);
		j++;
	}
	free(line), line = NULL;
	cmd[j] = NULL;

	return (cmd);
}
