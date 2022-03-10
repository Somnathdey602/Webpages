
#include<stdio.h>
int old_sum(int n) 
{   int total = 0, i;   
for ( i = 0; i <= n; ++i) 
	{
     total += i;
    }   
	
	 }
 
int sum(int n) 
{   
return (n*(n+1))/2; 
} 
 
int main() 
{
   printf("n = ");
    int n;
	scanf("%d", &n);
	printf("old_sum(%d) = %d\n", n, old_sum(n));   
	printf("sum(%d) = %d\n", n, sum(n));   
	return 0; 
	}
