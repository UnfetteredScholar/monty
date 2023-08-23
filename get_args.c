#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * _strlen - gets the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s != NULL && s[len] != '\0')
		len++;
	return (len);
}

/**
 * remove_newline - removes a new line from a string
 * @s: the string
 *
 * Return: void
 */
void remove_newline(char *s)
{
	int len = _strlen(s);

	if (s != NULL && s[len - 1] == '\n')
		s[len - 1] = '\0';
}

/**
 * _strdup - duplicates the input string
 * @str: the string to be buplicated
 *
 * Return: pointer to duplicate string or else NULL
 */
char *_strdup(char *str)
{
	int len = 0;
	char *dup = NULL;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

/**
 * get_args - converts string to array based on token
 * @s: the string
 * @t: the token
 *
 * Return: void
 */
void get_args(char *s, const char *t)
{
	remove_newline(s);
	ext.arg1 = _strdup(strtok(s, t));
	ext.arg2 = _strdup(strtok(NULL, t));
}
