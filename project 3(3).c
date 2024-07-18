#include<stdio.h>
main()
{
	int n,ld,fd;
	printf("Enter Number=");
	scanf("%d",&n);
	
	ld=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	
	printf("sum of fd & ld=%d",fd+ld);
	

}