#include "main.h"

/**
 * append_text_to_file - add text to the end of a file
 * @filename: pointer to the file
 * @text_content: characters to be appended to text
 *
 * Return: file with appended text
 */

int append_text_to_file(const char *filename, char *text_content)
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

	ans1 = open(filename, O_WRONLY | O_APPEND);
	ans3 = write(ans1, text_content, span);

	if (ans1 == -1 || ans3 == -1)
	{
		return (-1);
	}

	close(ans1);
	return (1);
}
