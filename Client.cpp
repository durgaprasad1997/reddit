#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_NONSTDC_NO_DEPRECATE

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include <stddef.h>


#include"HeadServer.h"
/*
int main()
{
	int loginresult=0;
	while (1)
	{
		printf("MENU\n");
		printf("1:sign in\n");
		printf("2:login\n");

		int ch;
		int innerch;
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			signUp();
			break;
		case 2:
			loginresult=login();
			if (loginresult != 0)
			{
				printf("valid Credentials\n");
				printf("Inner menu\n");
				printf("1:add post\n");
				printf("2:deletepost\n");
				printf("3:review post\n");
				printf("4:display posts\n");
				printf("5:log out");

				printf("enter ur choice\n");
				scanf("%d", &innerch);
				switch (innerch)
				{
				case 1:
					addPost(loginresult);
					break;
				case 2:
					//deletePost();
					break;
				case 3:
					//reviewPost();
					break;
				case 4:
					//displayPost();
					break;

				case 5:
					//logOut();
					break;
				}

			}
			else
			{
				printf("invalid credentials\n");
			}
			break;
		default:
			break;
		}

	}
	return 0;
}

*/

int main()
{
	getInfo('d');
	
	
	return 0;
}