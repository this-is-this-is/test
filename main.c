#include <stdio.h>
#include "hello.h"
#pragma warning(disable:4996)
#define N 5

int main()
{
	printf("hello");
	int x[N][N], y[N][N], z[N][N] = {0};
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &x[i][j]);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &y[i][j]);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) 
		{
			for(int k = 0; k < N; k++)
			{
				if (x[i][k] == 1 && y[k][j] == 1)
				{
					z[i][j] = 1;
					break;
				}
			}

		}
	}
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d ", z[i][j]);
		printf("\n");
	}
	return 0;
}
/*
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1
1 0 0 0 0

0 0 0 0 1
1 0 0 0 0
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0

0 0 0 1 0
0 0 0 0 1
1 0 0 0 0
0 1 0 0 0
0 0 1 0 0


1 1 0 0 0
1 0 1 0 0
0 0 0 1 1
0 0 0 0 0
1 1 0 0 1

1 1 1 0 0
1 1 0 1 1
1 1 0 0 1
0 0 0 0 0
1 1 1 0 1

1 1 1 1 1
1 1 1 0 1
1 1 1 0 1
0 0 0 0 0
1 1 1 1 1

1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
*/