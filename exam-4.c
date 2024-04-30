#include<stdio.h>
//question-4 find cube of each  elements of an 1d array using pointer.

main()
{
	int a[100];
	int *ptr,i,n;
	
	printf("enter the size of array = ");
	scanf("%d",&n);
	
	ptr = &a;
	
	printf("\n--------------------\n");
	for(i=1; i<=n; i++)
	{
	    printf("enter the array element = ");
	    scanf("%d",&a[i]);
	}
	
	printf("\n--------------------\n");
	printf("Square of each element : \n");
	for(i=1; i<=n; i++)
	{
	    printf("%d => %u\n",(*(ptr+i))*(*(ptr+i))*(*(ptr+i)),(ptr+i));
	}
}