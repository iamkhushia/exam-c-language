#include<stdio.h>
//question-2 sum of element in an array using a function.

main()
{
	int a[100],sum=0,i,n,size;
	
	printf("enter the size of array = ");
	scanf("%d",&size);
	
	printf("enetr element of array = \n");
	
	for(i=0; i<size; i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<size; i++)
	{
		printf("%d\n",a[i]);
		sum = sum + a[i];
	}
	
	printf("sum of element in an array is = %d",sum);
}