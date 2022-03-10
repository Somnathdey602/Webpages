#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct BookDetail
{
	char author[25];
	char publisher[25];
	int price;
	char branch[10];
}book;
void print(book *pt);
void add(book *pt);
void srcBranch(book *pt);
void srcPublisher(book *pt);
int main()
{
	book *pt;
	int i;
	pt = (book*)malloc(sizeof(book));
	while(1)
	{
		printf("\nChoice are:\n1. Add new Book\n2. Search by Branch\n3. Search by Publisher\n4. Exit\t\t");
		scanf("%d",&i);
		getchar();
		if (i==4)
			break;
		else if (i==1)
			add(pt);
		else if (i==2)
			srcBranch(pt);
		else if(i==3)
			srcPublisher(pt);
		else
			printf("INVALID INPUT\n");
	}
	return 0;
}
void print(book *pt)
{
	printf("%s\t\t",pt->author);
	printf("%s\t\t",pt->publisher);
	printf("%d\t\t",pt->price);
	printf("%s\n", pt->branch);
}
void add(book *t)
{
	FILE *fpt;
	fpt=fopen("lib.txt","a");
	if(fpt==NULL)
	{
		printf("Cannot open file.");
		fclose(fpt);
		return;
	}
	printf("Enter Author name: ");
	gets(t->author);
	printf("Enter Publisher name: ");
	gets(t->publisher);
	printf("Enter Price: ");
	scanf("%d",&t->price);
	getchar();
	printf("Enter Branch (in short): ");
	gets(t->branch);
	fwrite(t,sizeof(book),1,fpt);
	fclose(fpt);
	printf("DATA ADDED.\n");
}
void srcBranch(book *pt)
{
	FILE *fpt;
	int p=0;
	char tempBranch[10];
	fpt = fopen("lib.txt","r");
	if(fpt==NULL)
	{
		printf("Cannot open file.\n");
		fclose(fpt);
		return;
	}
	if(feof(fpt))
	{
		printf("Empty\n");
		fclose(fpt);
		return;
	}
	printf("Enter Branch to search: ");
	gets(tempBranch);
	printf("%s\t\t","Author");
	printf("%s\t\t","Publisher");
	printf("%s\t\t","Price");
	printf("%s\n", "Branch");
	while(fread(pt,sizeof(book),1,fpt))
	{
		if (!strcmp(tempBranch,pt->branch))
		{
			print(pt);
			p=1;
		}
	}
	if(!p)
		printf("No search Found\n");
	fclose(fpt);
	return;
}
void srcPublisher(book *pt)
{
	FILE *fpt;
	char tempPublisher[25];
	fpt = fopen("lib.txt","r");
	if(fpt==NULL)
	{
		printf("Cannot open file.\n");
		fclose(fpt);
		return;
	}
	if(feof(fpt))
	{
		printf("Empty\n");
		fclose(fpt);
		return;
	}
	printf("Enter Publisher name to search: ");
	gets(tempPublisher);
	printf("%s\t\t","Author");
	printf("%s\t\t","Publisher");
	printf("%s\t\t","Price");
	printf("%s\n", "Branch");
	while(fread(pt,sizeof(book),1,fpt))
	{
		if (strcmp(tempPublisher,pt->publisher))
			continue;
		print(pt);
	}
	fclose(fpt);
	return;
}
