#include<stdio.h>
#include<stdlib.h>
int** transpose(int r,int c,int a[][c]);
int main()
{
	int i,j,r,c,**tran;
	printf("enter the no. of rows and columns of the matrix\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("enter the elements of the matrix\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	printf("the original matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	tran=transpose(r,c,a);
	
	printf("the transposed matrix is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			printf("%d ",tran[i][j]);
			printf("\n");
	}
	free(tran);
	return 0;
}
int** transpose(int r,int c,int a[][c])
{
	int i,j,**tran;
	tran=(int**)malloc(r*sizeof(int*));
	for(i=0;i<c;i++)
		tran[i]=(int*)malloc(sizeof(int));
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			tran[j][i]=a[i][j];
	return tran;
}
