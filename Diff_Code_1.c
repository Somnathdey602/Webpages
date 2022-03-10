#include <stdio.h> 
 
int old_max2(int n, const int a[n]) 
{   
int max_index = 0, i;
   for (i = 1; i < n; ++i) 
   {     
   		if (a[i] > a[max_index]) 
		{       
		max_index = i;
	     }   
	} 
 
  int max2_index = -1;   
  for (i = 0; i < n; i++)
   {     
   if (i != max_index) 
   {   
       if (max2_index == -1 || a[i] > a[max2_index]) 
	   {    
	        max2_index = i;       
		}     
	}   
} 
 
  return max2_index; 
  } 
 
 
int max2(int n, const int a[n]) 
{   
int i;   
	if (n <= 1) 
	{
 	return -1;
  	} 
 
  	int max_index = a[0] >
	   a[1] ? 0 : 1;//>= is changed
     	int max2_index = 1 - max_index; 
 
  	for (i = 2; i < n; i++)
   	{	  
      	if (a[i] > a[max_index]) 
	  	{     
	    	max2_index = max_index;       
			max_index = i;     
		}	 
		else if (a[i] > a[max2_index]) 
		{     
		  max2_index = i;     
		 }   
	} 
 
  return max2_index; 
  } 
 
int main() 
{   
printf("n = ");  
 int n, i; 
   scanf("%d", &n);  
    if (n > 0) 
	{   
	  int a[n];
	     
		 for (i = 0; i < n; ++i) 
		 {    
		    printf("a[%d] = ", i);    
			   scanf("%d", &a[i]);  
		} 
		  printf("old_max2(%d, a) = %d\n", n, old_max2(n, a));     
		  printf("max2(%d, a) = %d\n", n, max2(n, a));   
		  }
		   else
		    {     
			printf("old_max2(%d, NULL) = %d\n", n, old_max2(n, NULL));     
			printf("max2(%d, NULL) = %d\n", n, max2(n, NULL));   
			} 
 
  return 0; 
  
  }
