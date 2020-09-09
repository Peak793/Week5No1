#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
char Vowel[5] = { 'a','e','i','o','u' };
void deleteVowel(int n, char** p);
int main()
{
	int n;
	scanf("%d",&n);
	if (n <= 0 || n>10)
	{
		printf("Error");
		return 0;
	}
	char** p;
	p = (char**)malloc(n * sizeof(char));
	for (int i = 0; i < n; i++)
	{
		p[i] = (char*)malloc(30 * sizeof(char));
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%s", p[i]);
	}
	printf("\n");
	deleteVowel(n, p);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (p[i][j] != '0')
			{
				printf("%c", p[i][j]);
			}
		}
		printf("\n");
	}
	end :
	return 0;
}
void deleteVowel(int n,char **p)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				if (towlower(p[i][j]) == Vowel[k])
				{
					p[i][j] ='0';
				}
				else if (towlower(p[i][j]) < 97 || towlower(p[i][j]) > 122)
				{
					p[i][j] = '0';
				}
			}
		}
	}
}

