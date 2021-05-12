#include <stdio.h>

void main()
{
	int i;
	char string1[20] = "Dreams come true!", string2[20], * ptr1, * ptr2;

	ptr1 = string1;
	printf("string1ÀÇ ÁÖ¼Ò = %u \t ptr1 = %u\n", string1, ptr1);
	printf("string1 = %s\nptr1 = %s\n\n", string1, ptr1);
	printf("%s\n", ptr1 + 7);
	ptr2 = &string1[7];
	printf("%s\n\n", ptr2);
	
	for (i = 16; i >= 0; i--)
	{
		putchar(*(ptr1 + i));
	}
	for (i = 0; i < 20; i++)
	{
		string2[i] = *(ptr1 + i);
	}
	printf("string1 = %s\n", string1);
	printf("string2 = %s\n\n", string2);

	*ptr1 = 'p';
	*(ptr1 + 1) = 'e';
	*(ptr1 + 2) = 'a';
	*(ptr1 + 3) = 'c';
	*(ptr1 + 4) = 'e';
	printf("string1 = %s\n", string1);

	getchar();
}