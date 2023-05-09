#include "main.h"

/**
 * create_file - create a file using system call
 * @filename: pointer to the file to be created
 * @text_content: the information to put in the file
 *
 * Return: the file with its content.
 */

int create_file(const char *filename, char *text_content)
{
	int ans1, ans3, span = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (span = 0; text_content[span];)
		{
			span++;
		}
	}

	ans1 = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	ans3 = write(ans1, text_content, span);

	if (span == -1 || ans3 == -1)
	{
		return (-1);
	}

	close(ans1);

	return (1);
}
