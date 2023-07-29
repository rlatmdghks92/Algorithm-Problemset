#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int paper[101][101] = { {0} };
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

void fill(int x, int y)
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (paper[x + i][y + j] == 0)
				paper[x + i][y + j] = 1;
}

int mm(int a, int b)
{
	if (a <= b)
		return a;
	else
		return b;
}

int main(void)
{
	int n;
	int answer = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		fill(a, b);
	}

	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j <= 100; j++)
		{
			if (paper[i][j] == 1)
			{
				int cnt = 0;
				for (int k = 0; k < 4; k++)
					if (paper[i + dx[k]][j + dy[k]] == 0)
						cnt++;
				answer += cnt;
			}
		}
	}
	printf("%d", answer);
	return 0;
}
