#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry point
 * Description: a program that prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: the arguments values
 * Return: Always Success (0)
*/

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (number_of_bytes--)
	{
		printf("%02hhx%s", *p++, number_of_bytes ? " " : "\n");
	}
	return (0);
}


