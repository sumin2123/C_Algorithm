///* å ���� */
//#include <stdio.h> 
//
//void main()
//{
//	int i, length = 0;
//	char str[50];
//	printf("\n���ڿ��� �Է��ϼ��� : ");
//	gets(str);
//	printf("\n�Էµ� ���ڿ��� \n \"");
//	for (i = 0; str[i]; i++) {
//		printf("%c", str[i]);
//		length += 1;
//	}
//	printf("\"\n�Դϴ�");
//	printf("\n\n�Էµ� ���ڿ��� ���� = %d\n", length);
//
//	getchar();
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	int a, length = 0;
	char str[50];
	printf("���ڿ��� �Է��ϼ��� : \n");
	scanf("%s", str);
	printf("�Էµ� ���ڴ� %s�Դϴ�.", str);
	for (a = 0; str[a]; a++) {
		printf("%s", str[a]);
		length += 1;
	}
	printf("�Էµ� ���ڿ��� ���̴� %d\n", length);

	return 0;
}