#include <stdio.h>

void main()
{
	int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i++)
	{
		printf("학생 %d의 이름 : \n", i + 1);
		gets(student[i][0]);

		printf("학생 %d의 학과 : \n", i + 1);
		gets(student[i][1]);
		
		printf("학생 %d의 학번 : \n\n", i + 1);
		gets(student[i][2]);
	}

	for (i = 0; i < 2; i++)
	{
		printf("학생 %d", i + 1);

		for (j = 0; j < 3; j++)
		{
			printf("\n\t");
			for (k = 0; student[i][j][k] != '\0'; k++)
			{
				printf("%c\n", student[i][j][k]);
			}
		}
	}
	getchar();
}