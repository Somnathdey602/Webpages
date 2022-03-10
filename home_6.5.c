#include<stdio.h>
void isSymmetric(int arr[3][3],int);
int main()
{
	int a,b,i,j;
	printf("enter the no. of rows and columns of matrix\n");
	scanf("%d%d",&a,&b);
	if(a!=b)
		printf("not a square matrix \n");
	else
	{
	int arr[a][a];
	printf("enter the elements of array rowwise\n");
	for(i=0;i<a;i++)
		for(j=0;j<a;j++)
			scanf("%d",&arr[i][j]);
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	isSymmetric(arr,a);
	}
	return 0;
}
void isSymmetric(int arr[3][3],int a)
{
	int tran[a][a],i,j,k=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			tran[j][i]=arr[i][j];
		}
	}
	/*for(i=0;i<a;i++)
		for(j=0;j<a;j++)
		{
			if(tran[i][j]!=arr[i][j])
				k++;
			printf("%d\n",k);
		}*/
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
			printf("%d ",tran[i][j]);
		printf("\n");
	}
	//printf("%d",a);
	/*if(k==0)
		printf("it is a symmetric matrix\n");
	else
		printf("it is not a symmetric matrix\n")*/
}
