#include <stdio.h>
#include "libasm.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	check_ft_strlen(void)
{
	int i;
	int j;
	char *string = "Hello this is a string";
	i = ft_strlen(string);
	j = strlen(string);
	ft_putstr("\e[1;033m====================Testing ft_strlen====================\e[0m\n");
	printf("\e[1;32m%s\n\e[1;31mmine = %d\nreal = %d\e[0m\n", string,i, j);
	if (i == j)
		printf("\e[1;32m [OK]\e[0m\n");
	i = ft_strlen("");
	j = strlen("");
	printf("\e[1;32mEmpty string\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
	if (i == j)
		printf("\e[1;32m [OK]\e[0m\n");
	i = ft_strlen("\0");
	j = strlen("\0");
	printf("\e[1;32mNull string\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
	if (i == j)
		printf("\e[1;32m [OK]\e[0m\n");	
	i = ft_strlen("zero\0 hidden");
	j = strlen("zero\0 hidden");
	printf("\e[1;32mZero is hidden\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
	if (i == j)
		printf("\e[1;32m [OK]\e[0m\n");
}

void	check_ft_strcpy(void)
{
	char *str1;
	char *str2;
	str1 = malloc(50);
	str2 = malloc(50);

	ft_strcpy(str1, "this is a test");
	strcpy(str2, "This is a test");
	printf("\e[1;033m====================Testing ft_strcpy====================\e[0m\n");
	printf("\e[1;32m2 normal strings\n\e[1;31mmine = %s\nreal = %s\e[0m\n", str1, str2);
	ft_strcpy(str1, "\0");
	strcpy(str2, "\0");
	printf("\e[1;32mCopying NULL\n\e[1;31mmine = %s\nreal = %s\e[0m\n", str1, str2);

}

void 	check_ft_strcmp(void)
{
	int i;
	int j;
	char *str1 = "hallo";
	char *str2 = "hkya";
	printf("\e[1;033m====================Testing ft_strcmp====================\e[0m\n");
	i = ft_strcmp(str1, str2);
	j = strcmp(str1, str2);
	printf("\e[1;32mNormal strings\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
			if (i == j)
		printf("\e[1;32m [OK]\e[0m\n");	
	str1 = "null is somewhere \0 hihi";
	str2 = "hihihihihi";
	i = ft_strcmp(str1, str2);
	j = strcmp(str1, str2);
	printf("\e[1;32mHidden NULL in the string\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
			if (i == j)
		printf("\e[1;32m [OK]\e[0m\n");	
	str1 = "\0";
	str2 = "this is not NULL";
	i = ft_strcmp(str1, str2);
	j = strcmp(str1, str2);
	printf("\e[1;32mFirst string is NULL\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
			if (i == j)
		printf("\e[1;32m [OK]\e[0m\n");	
}

void	check_ft_strdup()
{
	char *string = "wow, this should be replaced";
	char *newstr;
	char *newstr_2;
	printf("\e[1;033m====================Testing ft_strdup====================\e[0m\n");
	newstr = ft_strdup(string);
	newstr_2 = strdup(string);
	printf("\e[1;32mNormal string\n\e[1;31mmine = %s\nreal = %s\e[0m\n", newstr, newstr_2);
	if (newstr == newstr_2)
		printf("\e[1;32m [OK]\e[0m\n");	
	newstr = ft_strdup("\0");
	newstr_2 = strdup("\0");
	printf("\e[1;32mString is NULL\n\e[1;31mmine = %s\nreal = %s\e[0m\n", newstr, newstr_2);
		if (newstr == newstr_2)
		printf("\e[1;32m [OK]\e[0m\n");
	newstr = ft_strdup("null");
	newstr_2 = strdup("null");
	printf("\e[1;32mString is NULL\n\e[1;31mmine = %s\nreal = %s\e[0m\n", newstr, newstr_2);
		if (newstr == newstr_2)
		printf("\e[1;32m [OK]\e[0m\n");
	newstr = ft_strdup("");
	newstr_2 = strdup("");	
	printf("\e[1;32mEmpty string\n\e[1;31mmine = %s\nreal = %s\e[0m\n", newstr, newstr_2);
		if (newstr == newstr_2)
		printf("\e[1;32m [OK]\e[0m\n");
}

void	check_ft_write(void)
{
	char *str = "Bon";
	int i;
	int j;
	printf("\e[1;033m====================Testing ft_write=====================\e[0m\n");

	i = ft_write(3, str, ft_strlen(str));
	j = write(3, str, strlen(str));
	printf("%d | %d\n", i, j);
}

int main(void)
{
	// check_ft_strlen();
	check_ft_strcpy();
	// check_ft_strcmp();
	// check_ft_strdup();
	// check_ft_write();
	return (0);
}
