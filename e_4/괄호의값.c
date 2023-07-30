#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char s[50];
int top = 0;
char str[50];

int main(void)
{
	gets_s(s, sizeof(s));
	int temp = 1;
	int answer = 0;

	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '(')
		{
			temp *= 2;
			top++;
			str[top] = '(';
		}
		else if (s[i] == '[')
		{
			temp *= 3;
			top++;
			str[top] = '[';
		}
		else if (s[i] == ')' && (top == 0 || str[top] != '('))
		{
			printf("0");
			return 0;
		}
		else if (s[i] == ']' && (top == 0 || str[top] != '['))
		{
			printf("0");
			return 0;
		}
		else if (s[i] == ')')
		{
			if (s[i - 1] == '(')
				answer += temp;
			top--;
			temp /= 2;
		}
		else if (s[i] == ']')
		{
			if (s[i - 1] == '[')
				answer += temp;
			top--;
			temp /= 3;
		}
	}
	if (top == 0)
		printf("%d", answer);
	else printf("0");
}
