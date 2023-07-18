#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100000];
	scanf("%s", s);
	int cnt = 0, ans = 0;
	int i = 0;

	while (i < strlen(s))
	{
		if (s[i] == '(' && s[i + 1] == ')')
		{
			ans += cnt;
			i++;
		}
		else
		{
			if (s[i] == '(')
				cnt++;
			else
			{
				cnt--;
				ans++;
			}
		}
		i++;

	}

	printf("%d", ans);

	
}
