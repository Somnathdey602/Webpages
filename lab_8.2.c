#include<stdio.h>
#include<stdlib.h>
int** add(int r,int c,int a[][c],int b[][c]);
void print(int r,int c,int s[][c]);
int main()
{
	int i,j,r1,c1,r,c,**sum;
	printf("Enter the no. of rows and columns of matrix A and matrix B\n");
	scanf("%d%d%d%d",&r1,&c1,&r,&c);
	if(r1!=r||c1!=c)
		printf("invalid matrix");
	else
	{
		int a[r][c],b[r][c];
		printf("enter the elements of matrix A\n");
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&a[i][j]);
		printf("enter the elements of matrix B\n");
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				scanf("%d",&b[i][j]);
		printf("matrix A\n");
		print(r,c,a);
		printf("matrix B\n");
		print(r,c,b);
		sum=add(r,c,a,b);
		printf("resultant matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				printf("%2d ",sum[i][j]);
			printf("\n");	
		}
	}
	free(sum);
	return 0;
}
void print(int r,int c,int s[][c])
{
    int i,j;
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
        	printf("%2d ",s[i][j]);
        printf("\n");
	}
    printf("\n");
}
int** add(int r,int c,int a[][c],int b[][c])
{
	int i,j,**sum;
	sum=(int**)malloc(c*sizeof(int*));
	for(i=0;i<r;i++)
		sum[i]=(int*)malloc(sizeof(int));
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			sum[i][j]=a[i][j]+b[i][j];
	return sum;		
}
