#include<stdio.h>
int findDifference(int [],int);
int main()
{
	int n,a,b,i,j;
	printf("enter the no. of elements \n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the no. of elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(j=0;j<n;j++)
		printf("%d ",arr[j]);
	printf("\n");
	findDifference(arr,n);
	findDifference(arr,n-1);
	findDifference(arr,n-2);
	//findDifference(arr,n-3);
	return 0;	
} 
int findDifference(int arr[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i+1]-arr[i];
	}
	for(j=0;j<n-1;j++)
		printf("%d ",arr[j]);
	printf("\n");
}
