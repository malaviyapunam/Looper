#include<stdio.h>

main()
{
	int number,count=0;
	
	printf("Enter any number:");
	scanf("%d",&number);
	while(number !=0)
	{
		count++;
		number=number/10;
	}
	printf("Total number of digits: %d ",count);
}