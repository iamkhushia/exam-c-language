#include<stdio.h>
//question-5 use structure to represent a book title author price.

struct book
{
	char book_name[50],book_author[100];
	int book_price[100];
};
main()
{
	int n;
	printf("enter size of object = ");
	scanf("%d",&n);
	struct book s[n];
	int i;
	
	for (i=0;i<n;i++)
	{
		printf("enter book name = ");
		scanf("%s",&s[i].book_name);
		
		printf("enter book author name = ");
		scanf("%s",&s[i].book_author);
		
		printf("enter book price = ");
		scanf("%s",&s[i].book_price);
		
	}
	for(i=0;i<n;i++)
	{
		printf("book name =%s \n",s[i].book_name);
		printf("book author=%s \n",s[i].book_author);
		printf("book price=%s \n",s[i].book_price);
		
	}
}