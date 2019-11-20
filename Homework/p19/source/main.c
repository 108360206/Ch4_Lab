#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char string[20];
	char string2[] = "string literal";
	int i;

	printf("Enter a string: ");
	scanf("%s", string);

	printf("string is: %s\nstring2 is: %s\n""string with spaces between characters is: \n", string, string2);

	for (i = 0; string[i] !='\0'; i++)
	{
		printf("%c", string[i]);
	}
	printf("\n");
	printf("total of array element valudes is %d\n", total);

	system("pause");
	return 0;
}