#include <stdio.h>
#include <stdlib.h>
#define EX 4
#define STU 3

int mi(const int grades[][EX], int pupils, int tests);
int ma(const int grades[][EX], int pupils, int tests);
double averge(const int setofgrades[], int tests);
void pr(const int grades[][EX], int puplis, int tests);

int main(void)
{
	int student;
	const int studentgrades[STU][EX] =
	{ {77,68,86,73},{96,87,89,78},{70,90,86,81} };
	printf("The array is:\n");
	pr(studentgrades, STU, EX);

	printf("\n\nLowest grade: %d\nHighest grade :%d\n",
	mi(studentgrades, STU, EX),
	ma(studentgrades, STU, EX));
	for ( student = 0; student < STU; student++)
	{
		printf("The average grade for student %d is %.2f\n", student, averge(studentgrades[student], EX));
	}

	system("pause");
	return 0;
}

void pr(const int grades[][EX], int puplis, int tests)
{
	int i, j;
	printf("          [0]  [1]  [2]  [3]");
	for (i = 0; i < puplis; i++) 
	{
		printf("\nstudentgrades[%d] ", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grades[i][j]);
	}
}

int mi(const int grades[][EX], int pupils, int tests)
{
	int i, j, lowgrades = 100;
	for ( i = 0; i < pupils; i++)
	{
		for ( j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowgrades) 
			{
				lowgrades = grades[i][j];
			}
		}
	}
	return lowgrades;
}
int ma(const int grades[][EX], int pupils, int tests) 
{
	int i, j, higrades = 0;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > higrades)
			{
				higrades = grades[i][j];
			}
		}
	}
	return higrades;
}

double averge(const int setofgrades[], int tests)
{
	int i, total = 0;
	for ( i = 0; i < tests; i++)
	{
		total += setofgrades[i];
	}

	return(double)total / tests;
}
