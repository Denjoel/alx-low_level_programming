#include "main.h"

/**
 * read_textfile - Reads text file and prints the letters.
 * @filename: The filename.
 * @letters: Number of letters printed.
 * Return: Numbers of letters printed, returns 0 if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int jk;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	jk = open(filename, O_RDONLY);

	if (jk == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(jk, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(jk);

	free(buf);

	return (wr);
}
