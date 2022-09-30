#include <stdio.h>

int m;
int color[50];
int k;
int n = 0;

double sol = 0;

int main()
{
	scanf("%d", &m);
	
	for (int i = 0; i < m; ++i)
	{
		scanf("%d", &color[i]);
		n += color[i];
	}
	
	scanf("%d", &k);

	for (int i = 0; i < m; ++i)
	{
		if (color[i] >= k) {
			double temp = 1;
			for (int j = 0; j < k; ++j)
			{
				temp *= (double)(color[i] - j) / (n - j);
			}
			sol += temp;
		}
	}

	printf("%.16f", sol);
	return 0;
}
