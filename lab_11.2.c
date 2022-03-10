#include<stdio.h>
#include<stdlib.h>
int** mul(int r1,int c1,int c2,int a[][c1],int b[][c2]);
int** print(int r1,int c1,int c2,int a[][c1],int b[][c2]);
int main()
{
	int r1,r2,c1,c2,i,j,**m;
	srand(time(0));
//	printf(" Enter the no. of row and columns of matrix a: \n");
//	scanf("%d%d",&r1,&c1);
	r1=rand()%3+1;
	c1=rand()%3+1;
//	printf(" Enter the no. of row and columns of matrix b: \n");
//	scanf("%d%d",&r2,&c2);
	r2=rand()%3+1;
	c2=rand()%3+1;
	int a**;
	int b**;
	
	if(c1!=r2)
		printf("not a valid matrix");
	else
	{
		printf("%d %d %d %d\n",r1,c1,r2,c2);
//		printf(" Enter matrix a elements\n");
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
//				scanf("%d",&a[i][j]);
				a[i][j]=rand()%20+1;
//		printf(" Enter matrix b elements\n");
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
//				scanf("%d",&b[i][j]);
				b[i][j]=rand()%20+1;
		m=mul(r1,c1,c2,a,b);
		printf(" The multiplication of the give matrices is:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
				printf("%2d ",m[i][j]);
			printf("\n");
		}
	}
	return 0;
}
int** mul(int r1,int c1,int c2,int a[][c1],int b[][c2])
{
	int i,j,k,sum=0,**m;
	m=(int**)malloc(c2*sizeof(int*));
	for(i=0;i<r1;i++)
		m[i]=(int*)malloc(sizeof(int));
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				sum+=a[i][k]*b[k][j];
				m[i][j]=sum;
			}
			sum=0;
		}
	}
	return m;
}

