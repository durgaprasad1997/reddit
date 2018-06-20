#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_NONSTDC_NO_DEPRECATE

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include <stddef.h>

/*
int stringToNumber(char* num){
	int i = 0;
	int j = 0;
	while (num[i] != '\0'){
		j = j * 10 + (num[i] - '0');
		i++;
	}
	return j;
}
*/

void getInfo(char s)
{
	FILE *ot = fopen("output.txt", "a");

	FILE *fp = fopen("mainDB.txt", "r");
	char *line = (char *)malloc(100 * sizeof(char));
	while (fgets(line, 1000, fp) != NULL)
	{
		if (!strcmp(line[0] + "", s + ""))
		{
			fprintf(ot, "%s", line);
		}

	}
	fclose(fp);
	//return ot;
}