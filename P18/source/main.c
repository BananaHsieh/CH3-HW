#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char string1[60] = "Welcome";
	char string2[60];

	int len;

	//strcpy_s(string2 ,string1);�o�@�ӻy�k�L�����w�������L
	printf("string=%s\n", string1);

	len = strlen(string1);
	printf("�r����׬�%d\n", len);

	system("pause");
	return 0;
}
