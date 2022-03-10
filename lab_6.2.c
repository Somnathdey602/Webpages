#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int check (int,int);
int convert (int,int,int);
int main()
{
	int n,typein,typeo,basein,baseo;
	printf("enter the type of no. system\n1.binary\n2.octal\n3.decimal\n4.exit\n");
	scanf("%d",&typein);
	switch(typein)
	{
		case (1):
		basein=2;
		break;
		case (2):
		basein=8;
		break;
		case (3):
		basein=10;
		break;
		case (4):
		exit(0);
		break;
		default:
		printf("invalid input\n");
		return 0;
		break;
	}
	printf("enter a no.\n");
	scanf("%d",&n);
	if(n<0)
	printf("invalid input\n");
	else
	{
		if(check(n,basein)>0)
		{
		printf("invalid input\n");
		return 0;
		}
		else
		{
			printf("enter the type of system to be converted\n1.binary\n2.octal\n3.decimal\n");
		scanf("%d",&typeo);
		switch(typeo)
		{
			case (1):
			baseo=2;
			break;
			case (2):
			baseo=8;
			break;
			case (3):
			baseo=10;
			break;
			default:
			printf("invalid input");
			return 0;
			break;
		}
		printf("%d\n",convert(n,baseo,basein));
		return main();
		}
	}
}
int check(int n,int basein)
{
	int i,j,k=0;
	i=n;
	while(i!=0)
	{
		j=i%10;
		if(j>=basein)
		{
			k++;
			break;
		}
		i/=10;
	}
	return (k);
}
int convert(int n,int baseo,int basein)
{
	int i=0,j,k=0,dec=0;
	while(n!=0)
	{
		dec+=(n%10)*pow(basein,i);
		++i;
		n/=10;
	}
	i=1;
	while(dec!=0)
	{
		k+=(dec%baseo)*i;
		dec/=baseo;
		i*=10;
	}
	return (k);
}
