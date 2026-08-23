#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//void sh(char* str,int length)
//{
//	int right = length - 1;
//	int i = 0;
//
//	for (i = right; i >= 0; i--)
//	{
//		printf("%c", str[i]);
//	}
//}

void sh(char* str, int length)
{
	if (length >= 0)
	{
		printf("%c", str[length]);
		sh(str, length - 1);
	}
}

int main()
{
	char str[100];
	scanf("%s", str);
	sh(str, strlen(str));
	return 0;
}

