#include<stdio.h>

main()
{
	char i='a',n='z';
	do
	{
		if(i==n)
		{
			continue;
		}
		printf("%c\n",i);
		i++,i++,i++,i++;
	}while(i<=n);
}