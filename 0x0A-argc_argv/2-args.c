#include "main.h"
/**
 * main - -prints all arguments it recieves
 * @argc: the number or arguments
 * @argv: the arguments
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
