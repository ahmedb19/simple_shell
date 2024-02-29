#include "shell.h"

/**
 *_execute - executes commands
 *@cmd: Command
 *@argv: Array of Args
 *
 *Return: Status
 */

int _execute(char **cmd, char **argv)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (execve(cmd[0], cmd, env) == -1)
		{
			perror(argv[0]);
			freearr(cmd);
			exit(0);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		freearr(cmd);
	}
	return (WEXITSTATUS(status));
}
