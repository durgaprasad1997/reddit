#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_NONSTDC_NO_DEPRECATE

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include <stddef.h>

#include"MainServer.h"

/*
int checkValidity(char *u, char *p)
{
	if (strlen(u) <= 2 || strlen(p) <= 2)
		return -1;
	return 1;
}


void signUp()
{
	char *uname = (char *)malloc(100 * sizeof(char));
	char *password = (char *)malloc(100 * sizeof(char));
	printf("enter username\n");
	scanf("%s", uname);
	printf("enter password\n");
	scanf("%s", password);
	int x = checkValidity(uname, password);
	if (x == 1)
	{
		int userid=addUser(uname, password);
		char *useridname = (char *)malloc(100 * sizeof(char));
		itoa(userid, useridname, 10);

		
		int index = strlen(useridname);
		useridname[index++] = '.';
		useridname[index++] = 't';
		useridname[index++] = 'x';
		useridname[index++] = 't';
		useridname[index++] = '\0';

		FILE *fp = fopen(useridname, "a");
		fclose(fp);
		return ;

	}
	else
	{
		printf("invalid format\n");
		return;
	}

}
int login()
{
	char *uname = (char *)malloc(100 * sizeof(char));
	char *password = (char *)malloc(100 * sizeof(char));
	printf("enter username\n");
	scanf("%s", uname);
	printf("enter password\n");
	scanf("%s", password);

	int userid = loginStatus(uname, password);
	if (userid != 0)
	{
		return userid;
	}
	else
	{
		return 0;
	}


}

void addPost(int id)

{
	printf("enter the category\n");
	char *category = (char *)malloc(100 * sizeof(char));
	scanf("%s", category);
	printf("enter the post\n");
	char *post = (char *)malloc(100 * sizeof(char));
	scanf(" %[^\n]s", post);

	addPostInFile(id,category, post);


}

*/