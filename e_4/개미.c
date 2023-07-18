#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int w, h, p, q, t;
	scanf("%d %d", &w, &h);
	scanf("%d %d", &p, &q);
	scanf("%d", &t);
	int dx = 1, dy = 1;

	int tx = t % (2 * w);
	int ty = t % (2 * h);
	
	for (int i = 0; i < tx; i++)
	{
		if (p <= 0 || p >= w)
			dx = -dx;
		p += dx;
	}
	for (int i = 0; i < ty; i++)
	{
		if (q <= 0 || q >= h)
			dy = -dy;
		q += dy;
	}

	printf("%d %d", p, q);

	return 0;
}
