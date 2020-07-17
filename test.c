/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/15 18:15:47 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/07/15 18:24:26 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strlen(char *str)
{
    int i= 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char *str1;
	const unsigned char *str2;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	if (str1[i] == '\0' || str2[i] == '\0')
		return (str1[i] - str2[i]);
	while (i < n && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (i == n)
		return (0);
	if (str1[i] != str2[i])
		return (str1[i] - str2[i]);
	return (0);
}

int     main(void)
{
    char *name;
    char *password;
    printf("Enter name:");
    scanf("%s", name);
    printf("Enter password:");
    scanf("%s", password);
    // if (!ft_strncmp("password", password, ft_strlen("password")))
    // {
    //     printf("Enter password:");
    // }
    return 0;
}