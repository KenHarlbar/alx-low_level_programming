#include "main.h"

/**********/
char *_strchr(char *s, char c)
{
	unsigned int count = 0;

	while (*(s + count) != '\0')
	{
		if (*(s + count) == 'c')
		{
			return (s + count);
		}
		count++;
	}
	return ('\0');
}
