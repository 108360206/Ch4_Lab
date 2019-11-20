//a ******************************//

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int c=1;
	int j, i, tmp, a[5] = {26,5,81,7,63},a1,a2,a3,a4,a5;
	for (i = 0; i < 4; i++)
	{
		c = 0;
		for ( j = 0; j < 4; j++)
		{
			if(a[j]>a[j+1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				c = 1;
			}
		}
		if (c == 0)
		{
			break;
		}
		printf("Loop %d:", i);
		for ( j = 0; j < 5; j++)
		{
			printf("%4d", a[j]);
		}
		
		printf("\n");
	}
	system("pause");
}

//b ********************************//