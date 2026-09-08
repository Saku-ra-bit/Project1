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

//void sh(char* str, int length)
//{
//	if (length >= 0)
//	{
//		printf("%c", str[length]);
//		sh(str, length - 1);
//	}
//}
//
//int main()
//{
//	char str[100];
//	scanf("%s", str);
//	sh(str, strlen(str));
//	return 0;
//}

//int sum(int n)
//{
//	if (n / 10 != 0)
//	{
//		return n % 10 + sum(n / 10);
//
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", sum(n));
//	return 0;
//}

//int mul(int n)
//{
//	if (n > 0)
//	{
//		return n * mul(n - 1);
//
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", mul(n));
//	return 0;
//}

//double sq(int m, int n)
//{
//	if (n > 0)
//	{
//		return m * sq(m, n - 1);
//	}
//	else if (n < 0)
//	{
//		return 1.0 / (m * sq(m, -n - 1));
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	printf("%g", sq(m, n));
//	return 0;
//}

//void bu(int arr[],int strleng)
//{
//	for (int i = 0; i < strleng; i++)
//	{
//		for (int j = i + 1; j < strleng; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[100];
//	int i;
//	int j;
//	int n; scanf("%d", &n); 
//	for (int i = 0; i < n; i++) 
//	{ 
//		scanf("%d", &arr[i]); 
//	}
//	bu(arr, n);
//	for (int j = 0; j < n; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

