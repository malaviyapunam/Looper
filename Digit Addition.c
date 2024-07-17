#include<stdio.h>

main()
{
	int number,faist,last,sum;
	
	printf("Enter any number:");
	scanf("%d",&number);
	
	last=number%10;
	while(number>=10)
	{
		number=number/10;
	}
	faist=number;
	sum=faist+last;
	printf("The sum of the first and the last digit: %d ",sum);
}