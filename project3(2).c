#include<stdio.h>
main()
{
	int a,count=0;
	printf("Enter Value=");
	scanf("%d",&a);
	
	for(count=0;a!=0;count++)
	a=a/10;
	printf("count=%d",count);
}