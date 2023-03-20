#include "main.h"

/**
 * _strlen - Function returns lenght
 * of a string
 *
 * @s: input char
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - Function appends text to the
 * end of a file
 *
 * @filename: file to append
 * @text_content: data to add to filename
 *
 * Return: 1 on success,
 * otherwise -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{

	ssize_t nletters;
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		nletters = write(file, text_content, _strlen(text_content));
		if (nletters == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
