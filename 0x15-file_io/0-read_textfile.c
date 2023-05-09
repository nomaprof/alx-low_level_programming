#include "main.h"

/**
 * read_textfile - reads text from stdin and prints it to POSIX stdout
 * @filename: pointer to the opened file
 * @letters: tracks the number of letters to read
 * Return: the result to standard output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ans1, ans2, ans3;
	char *hold;

	if (filename == NULL)
	{
		return (0);
	}

	hold = malloc(sizeof(char) * letters);

	if (hold == NULL)
	{
		return (0);
	}

	ans1 = open(filename, O_RDONLY);
	ans2 = read(ans1, hold, letters);
	ans3 = write(STDOUT_FILENO, hold, ans2);

	if (ans1 == -1 || ans2 == -1 || ans3 == -1 || ans3 != ans2)
	{
		free(hold);
		return (0);
	}

	free(hold);
	close(ans1);

	return (ans3);
}
