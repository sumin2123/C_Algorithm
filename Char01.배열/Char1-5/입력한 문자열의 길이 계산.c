///* 책 예제 */
//#include <stdio.h> 
//
//void main()
//{
//	int i, length = 0;
//	char str[50];
//	printf("\n문자열을 입력하세요 : ");
//	gets(str);
//	printf("\n입력된 문자열은 \n \"");
//	for (i = 0; str[i]; i++) {
//		printf("%c", str[i]);
//		length += 1;
//	}
//	printf("\"\n입니다");
//	printf("\n\n입력된 문자열의 길이 = %d\n", length);
//
//	getchar();
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	int a, length = 0;
	char str[50];
	printf("문자열을 입력하세요 : \n");
	scanf("%s", str);
	printf("입력된 문자는 %s입니다.", str);
	for (a = 0; str[a]; a++) {
		printf("%s", str[a]);
		length += 1;
	}
	printf("입력된 문자열의 길이는 %d\n", length);

	return 0;
}