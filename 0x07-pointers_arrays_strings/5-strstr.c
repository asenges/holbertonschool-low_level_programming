#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - function
 * Return: char
 * @haystack: char pointer
 * @needle: char pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 21, 2022
 */

char *_strstr(char *haystack, char *needle)
{
        int i;
        int s = 0;

        for (; needle[s];)
                s++;

        for (; haystack != NULL;)
        {
                for (i = 0; needle[i]; i++)
                {
                        if (haystack[i] != needle[i])
                                break;
                }
                if (i != s)
                        haystack++;
                else
                        return (haystack);
        }
        return (NULL);
}