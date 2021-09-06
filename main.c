/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 13:27:01 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/08/24 13:37:36 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libasm.h"
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

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
	i = ft_strlen("");
	j = strlen("");
	printf("\e[1;32mEmpty string\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
	if (i == j)
	i = ft_strlen("\0");
	j = strlen("\0");
	printf("\e[1;32mNull string\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
	if (i == j)	
	i = ft_strlen("zero\0 hidden");
	j = strlen("zero\0 hidden");
	printf("\e[1;32mZero is hidden\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
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
	printf("\e[1;32m2 Normal strings\n\e[1;31mmine = %s\nreal = %s\e[0m\n", str1, str2);
	ft_strcpy(str1, "\0");
	strcpy(str2, "\0");
	printf("\e[1;32mCopying NULL\n\e[1;31mmine = %s\nreal = %s\e[0m\n", str1, str2);
	ft_strcpy(str1, "this is a test");
	strcpy(str2, "This is a test");
	ft_strcpy(str1, "Move this");
	strcpy(str2, "Move this");
	printf("\e[1;32mSecond string is shorter\n\e[1;31mmine = %s\nreal = %s\e[0m\n", str1, str2);
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
	str1 = "null is somewhere \0 hihi";
	str2 = "hihihihihi";
	i = ft_strcmp(str1, str2);
	j = strcmp(str1, str2);
	printf("\e[1;32mHidden NULL in the string\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
	str1 = "\0";
	str2 = "this is not NULL";
	i = ft_strcmp(str1, str2);
	j = strcmp(str1, str2);
	printf("\e[1;32mFirst string is NULL\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
	str1 = "\0";
	str2 = "\0";
	i = ft_strcmp(str1, str2);
	j = strcmp(str1, str2);
	printf("\e[1;32mBoth are NULL\n\e[1;31mmine = %d\nreal = %d\e[0m\n", i, j);
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
	newstr = ft_strdup("\0");
	newstr_2 = strdup("\0");
	printf("\e[1;32mString is NULL\n\e[1;31mmine = %s\nreal = %s\e[0m\n", newstr, newstr_2);
	newstr = ft_strdup("null");
	newstr_2 = strdup("null");
	printf("\e[1;32mString is empty\n\e[1;31mmine = %s\nreal = %s\e[0m\n", newstr, newstr_2);
	newstr = ft_strdup("");
	newstr_2 = strdup("");	
}

void	check_ft_write(void)
{
	char *str = "\e[1;31mThis is a string that will be written hihi\n";
	int i;
	int j;
	int error_write;
	int error_ft_write;
	printf("\e[1;033m====================Testing ft_write=====================\e[0m\n");
	printf("\e[1;32mJust a normal string\n\e[0m");
	i = ft_write(0, str, ft_strlen(str));
	error_ft_write = errno;
	printf("\e[1;31mmine : %d | %s\n", i, strerror(error_ft_write));
	j = write(0, str, strlen(str));
	error_write = errno;
	printf("real : %d | %s\n\e[0m", j, strerror(error_write));
	printf("\e[1;32mBad file discriptor\n\e[0m");
	i = ft_write(-1, str, ft_strlen(str));
	error_ft_write = errno;
	printf("\e[1;31mmine : %d | %s\n", i, strerror(error_ft_write));
	j = write(-1, str, strlen(str));
	error_write = errno;
	printf("real : %d | %s\n\e[0m", j, strerror(error_write));

}

void 	check_ft_read(void)
{
	char *str = malloc(500);
	char *str2 = malloc(500);
	int fd_mine;
	int fd_real;

	fd_mine = open("main.c", O_RDONLY);
	fd_real = open("main.c", O_RDONLY);
	printf("\e[1;033m====================Testing ft_read=====================\e[0m\n");
	int i;
	int j;
	int error_read;
	int error_ft_read;
	printf("\e[1;32mNormal input from a file\n\e[0m");
	i = ft_read(fd_mine, str, 5);
	printf("\e[1;31mmine : %d | has been read: %s\n", i, str);
	j = read(fd_real, str2, 5);
	printf("\e[1;31mreal : %d | has bene read: %s\n", j, str);
	printf("\e[1;32mBad file descriptor\n\e[0m");
	i = ft_read(42, NULL, 7);
	error_ft_read = errno;
	printf("\e[1;31mmine : %d | %s\n", i, strerror(error_ft_read));
	j = read(42, NULL, 7);
	error_read = errno;
	printf("\e[1;31mreal : %d | %s\n", j, strerror(error_read));
}

int main(void)
{
	check_ft_strlen();
	check_ft_strcpy();
	check_ft_strcmp();
	check_ft_strdup();
	check_ft_write();
	check_ft_read();
	return (0);
}
