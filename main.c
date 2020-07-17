#include <stdio.h>
#include "libasm.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	check_ft_strlen(void)
{
	int i;
	int j;
	char *string = "Hello this is a string";
	i = ft_strlen(string);
	j = strlen(string);
	printf("\e[1;033m====================Testing ft_strlen====================\e[0m\n");
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
	char *str1 = "hello";
	char *str2 = "gfks;fdgf";
	char *str3 = "hello";
	char *str4 = "gfks;fdgf";
	// printf("\e[1;033m====================Testing ft_strcpy====================\e[0m\n");
	// ft_strcpy(str1, str2);
	// strcpy(str3, str4);
	// printf("\e[1;32mNormal strings\n\e[1;31mmine = %s\nreal = %s\e[0m\n", str1, str3);	
	
}

void 	check_ft_strcmp(void)
{
	int i;
	int j;
	const char *str1 = "hallo";
	const char *str2 = "hkya";
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
	char *str = "This is a string of a certain legnth that I dont know\n";
	printf("\e[1;033m====================Testing ft_write=====================\e[0m\n");

	ft_write(1, str, ft_strlen(str));
	write(1, str, strlen(str));
}

int main(void)
{
	check_ft_strlen();
	check_ft_strcpy();
	check_ft_strcmp();
	check_ft_strdup();
	check_ft_write();
	return (0);
}
