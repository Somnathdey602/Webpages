
#include<stdio.h>
int main()
{
	int a,j,n=256,i;
	int arr[n];
	for(i=0;i<n;i++)
		arr[i]=0;
	printf("Enter the character array:\n");
	while((a=getchar())!='\n')
	{
		arr[a]++;
		if(a=='\n')
			break;
	}
	printf("\tHISTOGRAM\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			printf("\t%c|",i);
			for(j=1;j<=arr[i];j++)
				printf("* ");
			printf("\n");
		}
	}
	return 0;
}
