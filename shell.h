#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define DLM " \t\n"
extern char **env;

char *read_line(void);
char **token_handler(char *line);
void freearr(char **s);
int _execute(char **cmd, char **argv);

/* String functions */

char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);


#endif
