#include <stdio.h>
#include "libasm.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	int j;
	char str1[15] = "hello";
	char str2[15] = "goodmorning";
	char str3[15] = "hello";
	char str4[15] = "goodmorning";
	char str5[15] = "yolo";
	char str6[15] = "ypsss";
	// i = ft_strlen("hi!");
	// printf("%d\n", i);
	// ft_strcpy(str1, str2);
	// strcpy(str3, str4);
	// printf("|%s|\n", str1);
	// printf("|%s|\n", str3);
	// i = ft_strcmp(str6,str5);
	// j = strcmp(str6,str5);
	// printf("%d | %d\n", i, j);
	char *string = ft_strdup("what a wonderfull day!");
	printf("%s\n", string);
	return (0);
}