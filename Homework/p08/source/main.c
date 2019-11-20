#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
	int s[SIZE] = {19,3,15,7,11,9,13,5,17,1}, i,j;
	printf("%s%13s%17s\n", "Element", "Vlaue","Histogram");
	for (i = 0; i < SIZE; i++)
	{
		printf("%7d%13d", i, s[i]);
		for(j=1;j<=s[i];j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}
	system("pause");
	return 0;
}