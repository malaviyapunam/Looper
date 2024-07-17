#include<stdio.h>

main()
{
	char Alphabet='A';
	do{
		printf(" %c ",Alphabet);
		Alphabet++;Alphabet++;Alphabet++;Alphabet++;
	}while(Alphabet<='Z');
}