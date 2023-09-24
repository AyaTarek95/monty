#include "monty.h"
carry_t carry = {NULL, NULL, NULL, 0};
/**
 * main - entry point
 * @argc: count of args
 * @argv: value of args
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
char *content;
FILE *file;
size_t size = 0;
ssize_t read_line = 1;
stack_t *stack = NULL;
unsigned int count = 0;

	if (argc != 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	carry.file = file;
	if (!file)
	{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
	content = NULL;

	read_line = getline(&content, &size, file);
	carry.content = content;
	count++;
	if (read_line > 0)
	{
	exc(content, &stack, count, file);
	}
	free(content);
	}
fr_stck(stack);
fclose(file);
return (0);
}
