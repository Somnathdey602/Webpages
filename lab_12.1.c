#include<stdio.h>
#include<stdlib.h>
int* findMaxMin(int arr[],int);
int main()
{
	int n,i,*p;
	printf("enter the no. of terms to be entered\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the set of nos.\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	p=findMaxMin(arr,n);
	printf("the max and min nos. are %d %d respectively\n",p[0],p[1]);
	return 0;
}
int* findMaxMin(int arr[],int n)
{
	int i;int *a;
	a=(int*)malloc(2*sizeof(int));
	a[0]=-99999;a[1]=99999;
	for(i=0;i<n;i++)
	{
		if(a[0]<arr[i])
			a[0]=arr[i];
		if(a[1]>arr[i])
			a[1]=arr[i];
	}
	return a;
}

