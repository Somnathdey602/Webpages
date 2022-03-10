#include <stdio.h>
#include <stdlib.h>
#define N 200
char* concat(char *s1, char *s2);
int strcmpr(char *s1, char *s2);
char* strrevrs(char *str);
int main()
{
	char *str1, *str2;
	str1 = (char*)malloc(sizeof(char)*N);
	str2 = (char*)malloc(sizeof(char)*N);
	printf("enter String 1: ");
	gets(str1);
	printf("enter string 2: ");
	gets(str2);
	if (strcmpr(str1,str2))
		printf("Both string are not same.\n");
	else
		printf("Both String are same\n");
	printf("Concatenated String is %s\n", concat(str1,str2));
	char *rev1, *rev2;
	rev1 = strrevrs(str1);
	rev2 = strrevrs(str2);
	printf("Reverse of string 1 is: %s\nReverse of string 2 is: %s\n",rev1,rev2);
	free(str1);
	free(str2);
	return 0;
}
int strcmpr(char *s1, char *s2)
{
	while(*s1==*s2)
	{
		if (*s1=='\0' && *s2=='\0')
 			return 0;
		s1++;
		s2++;
	}
	return (*s1-*s2);
}
char* concat(char *s1, char *s2)
{
	char *cat=s1;
	while(*s1!='\0')
		s1++;
	while(*s2!='\0')
		*s1++ = *s2++;
	*s1='\0';
	return cat;
}

char* strrevrs(char *str)
{
	char *rev=str,t,*r=str;
	while(*rev!='\0')
		rev++;
	rev--;
	for(;str<rev;str++,rev--)
	{
		t=*str;
		*str=*rev;
		*rev=t;
	}
	return r;
}
