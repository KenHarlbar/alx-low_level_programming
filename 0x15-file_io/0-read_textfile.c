#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: name of file to read from
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 * and 0 if the file cannot be read
 */


ssize_t read_textfile(const char *filename, size_t letters) {
    FILE *file;
    /* Allocate a buffer to read the file content */
    char *buffer = (char *)malloc((letters + 1) * sizeof(char));
    ssize_t bytesRead, bytesWritten;

    if (filename == NULL) {
        return 0;
    }

    file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    bytesRead = fread(buffer, sizeof(char), letters, file);

    if (bytesRead <= 0) {
        fclose(file);
        return 0;
    }

    bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

    fclose(file);

    if (bytesWritten != bytesRead) {
        return 0;
    }

    return bytesWritten;
}
