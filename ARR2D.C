/* Program: Arr2D.c */
#include <stdio.h>
#define ROWS 4
#define COLS 3
int main ()
{
	// declare 4x3 array
	int matrix[ROWS][COLS] = {{10, 20, 30},{40, 50, 60},{70, 80, 90},{15, 25, 35}}; 
	int i, j;

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	i=1; //2nd row
	j=2; //3rd column
	printf("\nmatrix[0][0] = *(*(matrix)) ------>%d",*(*(matrix)));
	printf("\n*((*(matrix)) + (i * COLS + j))--->%d",*((*(matrix))+(i*COLS+j)));
	printf("\n*(*(matrix + i) + j)-------------->%d",*(*(matrix + i) + j));
	printf("\n*(matrix[i] + j)------------------>%d",*(matrix[i] + j));
	printf("\n(*(matrix + i))[j]---------------->%d",(*(matrix + i))[j]);
	printf("\n((*(matrix)) + (i * COLS + j))---->%x", ((*(matrix))+(i*COLS+j)));
	return 0;
}

