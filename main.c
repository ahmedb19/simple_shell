#include "shell.h"

/**
 *main - Simple Shell main function
 *@ac: Argument's count
 *@argv: Args
 *
 *Return: 0
 */

int main(int ac, char **argv)
{
	char *line = NULL;
	char **command = NULL;
	int status = 0;
	(void) ac;

	while (1)
	{
		line = read_line();
		if (line == NULL) /* EOF */
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}

		command = token_handler(line);
		if (!command)
			continue;

		status = _execute(command, argv);
	}
}
