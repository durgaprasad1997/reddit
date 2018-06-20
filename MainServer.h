#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_NONSTDC_NO_DEPRECATE




#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include <stddef.h>
#include"DataBase.h"
/*
struct metaData
{
	int no_of_users;
	int no_of_posts;
};
struct metaData metaStatus;

char* seperator(char** stringp, const char* delim)
{
	char* start = *stringp;
	char* p;

	p = (start != NULL) ? strpbrk(start, delim) : NULL;

	if (p == NULL)
	{
		*stringp = NULL;
	}
	else
	{
		*p = '\0';
		*stringp = p + 1;
	}

	return start;
}


char *stringReverse(char *str){
	int i = 0;
	int len = strlen(str);
	char *ret = (char*)malloc(len + 5);
	len = len - 1;
	while (str[i] != '\0'){
		ret[len - i] = str[i];
		i++;
	}
	return ret;
}


int addUser(char *uname,char *password)
{
	FILE *fp = fopen("users.txt", "a");

	FILE *f2 = fopen("metadata.txt", "r+");
	char * meta = (char *)malloc(100 * sizeof(char));
	fgets(meta, 1000, fp);
	metaStatus.no_of_users = atoi(seperator(&meta, ","));
	metaStatus.no_of_posts = atoi(seperator(&meta, ","));

	if (metaStatus.no_of_users==0)
	fprintf(fp, "%d,%s,%s", metaStatus.no_of_users+1,uname, password);
	else
		fprintf(fp, "\n%d,%s,%s", metaStatus.no_of_users + 1, uname, password);
	fclose(fp);

	fp = fopen("metadata.txt", "r");
	char *line = (char *)malloc(100 * sizeof(char));
	fgets(line, 1000, fp);
	fclose(fp);


	char *token1 = strtok(line, ",");
	char *token2 = strtok(line, ",");

	printf("%s  %s", token1, token2);

	metaStatus.no_of_users = stringToNumber(token1)+1;
	metaStatus.no_of_posts = stringToNumber(token2);

	fp = fopen("metadata.txt", "w");
	fprintf(fp, "%d,%d",metaStatus.no_of_users,metaStatus.no_of_posts);
	fclose(fp);

	fclose(fp);
	return metaStatus.no_of_users;
}



int loginStatus(char *uname, char *password)
{
	FILE *fp = fopen("users.txt", "r");
	char *line = (char *)malloc(100 * sizeof(char));

	while (fgets(line, 1000, fp) != NULL)
	{
		char *token1 = (char *)malloc(100 * sizeof(char));
		char * token2= (char *)malloc(100 * sizeof(char));
		char *token3 = (char *)malloc(100 * sizeof(char));

		token1 = seperator(&line, ",");
		token2 = seperator(&line, ",");
		token3 = seperator(&line, ",");
		int id = stringToNumber(token1);
		token2[strlen(token2)] = '\0';
		token3[strlen(token3)] = '\0';

		
		if (!strcmp(token2, uname) && !strcmp(token3, password))
			return id;
		
		
	}
	return 0;
}

void addPostInFile(int id,char *ca, char *msg)
{
	int postid = ++metaStatus.no_of_posts;
	char *postidfile = (char *)malloc(100 * sizeof(char));
	itoa(postid, postidfile, 10);
	int len = strlen(postidfile);
	postidfile[len++] = 'p';
	postidfile[len++] = '.';
	postidfile[len++] = 't';
	postidfile[len++] = 'x';
	postidfile[len++] = 't';
	postidfile[len++] = '\0';


	FILE *fp = fopen(postidfile, "a");
	fprintf(fp, "%s", msg);
	fclose(fp);

	fp = fopen("metadata.txt", "w");
	fprintf(fp, "%d,%d", metaStatus.no_of_users, metaStatus.no_of_posts);
	fclose(fp);


	char *useridfile = (char *)malloc(100 * sizeof(char));
	itoa(id,useridfile , 10);
	len = strlen(useridfile);
	useridfile[len++] = '.';
	useridfile[len++] = 't';
	useridfile[len++] = 'x';
	useridfile[len++] = 't';
	useridfile[len++] = '\0';

	fp = fopen(postidfile, "a");
	fprintf(fp, "%d,%s", postid,ca);
	fclose(fp);


}

*/