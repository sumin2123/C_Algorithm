#include <stdio.h>

void main()
{
	int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i++)
	{
		printf("�л� %d�� �̸� : \n", i + 1);
		gets(student[i][0]);

		printf("�л� %d�� �а� : \n", i + 1);
		gets(student[i][1]);
		
		printf("�л� %d�� �й� : \n\n", i + 1);
		gets(student[i][2]);
	}

	for (i = 0; i < 2; i++)
	{
		printf("�л� %d", i + 1);

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