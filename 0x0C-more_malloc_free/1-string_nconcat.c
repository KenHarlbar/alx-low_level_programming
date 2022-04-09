#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenate two strings
  *
  * @s1: first input string
  * @s2: second input string
  * @n: number of bytes
  *
  * Return: NULL if malloc fails and
  * a pointer to s if otherwise
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int count, count1, count2, i;
        char *s;

        if (s1 == NULL)
            s1 = "";

        if (s2 == NULL)
            s2 = "";

        count1 = 0;
        while (s1[count1] != '\0')
            count1++;

        count2 = 0;
        while (s2[count2] != '\0')
            count2++;

        if (n < count2)
            count2 = n;

        count = count1 + count2;

        s = malloc(count + 1);

        if (s == NULL)
            return (NULL);

        for (i = 0; i < count; i++)
        {
            if (i < count1)
                s[i] = s1[i];
            else
                s[i] = s2[i - count1];
        }
        s[i] = '\0';
        return (s);
}
