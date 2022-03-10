#include<stdio.h>
int main()
{
	int n,b,i,j,a,c;
	printf("enter no. of elements of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
//	for(j=0;j<n;j++)
//	printf("%d",arr[j]);
	for(j=0;j<n;j++)
	{
		a=0;
		for((b=j+1);b<n;b++)
		{
			if(arr[b]==arr[j])
			a++;
		}
		for(c=j-1;c>=0;c--)
		{
			if(arr[c]==arr[j])
			a++;	
		}	
		if(a==0)
			printf("%d ",arr[j]);
	}
	return 0;
}
