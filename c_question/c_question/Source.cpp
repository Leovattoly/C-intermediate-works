#include <stdio.h>

int main()
{
	int a[10][10];
	int b[10][10];
	int c[10][10];
	int m, n;
	int i;
	int j;
	printf("Enter the dimension of matrices :\n");
	scanf("%d%d", &m, &n);
	printf("Enter the first matrix:\n ");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; ++j)
			scanf("%d", &a[i][j]);
	}
	printf("Enter the second matrix:\n ");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; ++j)
			scanf("%d", &b[i][j]);
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; ++j)
			c[i][j] = a[i][j] + b[i][j];
	}
	printf("Sum of Matrices:\n ");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; ++j)
			printf("%d", c[i][j]);
	}


	return 0;
}