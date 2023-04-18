#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for a program that copies a file to another
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	FILE *fp_in, *fp_out;
	int c;

	if (argc != 3)
	{
	fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
	exit(EXIT_FAILURE);
	}
	fp_in = fopen(argv[1], "r");
	if (fp_in == NULL)
	{
	fprintf(stderr, "Error: Cannot open %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}
	fp_out = fopen(argv[2], "w");
	if (fp_out == NULL)
	{
	fprintf(stderr, "Error: Cannot open %s\n", argv[2]);
	fclose(fp_in);
	exit(EXIT_FAILURE);
	}
	while ((c = fgetc(fp_in)) != EOF)
	{
	if (fputc(c, fp_out) == EOF)
	{
		fprintf(stderr, "Error: Write failed\n");
		fclose(fp_in);
		fclose(fp_out);
	exit(EXIT_FAILURE);
	}
	}

	fclose(fp_in);
	fclose(fp_out);
	return (EXIT_SUCCESS);
}
