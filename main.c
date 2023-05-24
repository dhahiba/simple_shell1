#include "shell.h"
char **cmd = NULL;
char *l = NULL;
char *sn = NULL;
int s = 0;
/**
 * main - ...
 * @argc: ...
 * @argv: ....
 * Return: ...
 */


int main(int argc __attribute__((unused)), char **argv)
{
char command[MAX_COMMAND_LENGTH];
char *arguments[MAX_ARGUMENTS];
int arg_count;

signal(SIGINT, ctrlhandler);
sn = argv[0];
while (1)
{
printf(":) ");
fgets(command, sizeof(command), stdin);

arg_count = tokenize_command(command, arguments);
if (arg_count > 0)
{
execute_command(arguments);
}
}
free(l);
return (s);
}
