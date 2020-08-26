#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char i;
	scanf("%c", &i);
	if (i == 'A')
	{
		printf("[80, 100]");
	}
	else if (i == 'B')
	{
		printf("[70,80)");
	}
	else if (i == 'C')
	{
		printf("[60,70)");
	}
	else if (i == 'D')
	{
		printf("[50,60)");
	}
	else if (i == 'F')
	{
		printf("[0,50)");
	}
	else
	{
		printf("Error");
	}

		return 0;
}