#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

//create a matrix with random numbers between 0 to 100 

int main()
{
	int i, j, n, m, o, k;

	printf("enter matrix's column (n) :");
	scanf("%d", &n);
	printf("enter matrix's row (m) :");
	scanf("%d", &m);
	int matris[n][m];
	srand(time(NULL)); //gives the first seed based on current time	

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			for (o = 1; o <= n; o++)
			{
				for (k = 1; k <= m; k++)
				{
					matris[i][j] = rand() % 100 + 1; //rand func gives a number between 0 to maximum possible int. than we take it's mod to get a number in our range
				}
			}
		}
	}

//we done to write the matrix, next part is for printing

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < m; j++)
		{
			printf("%5d ", matris[i][j]);
		}

		printf("\n");
	}

	getch();
}

