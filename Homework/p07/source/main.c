#include <stdio.h>
#include <stdlib.h>
#define SIZE 12

int main(void)
{
	int s[SIZE] = { 1,3,5,4,7,2,99,16,45,67,89,45 }, i, total = 0;
	for (i = 0; i < SIZE; i++)
	{
		total+=s[i];
	}
	printf("total of array element valudes is %d\n",total);
	
	system("pause");
	return 0;
}