#include<stdio.h>
#include<stdlib.h>

int square(int z);

int main(void)
{
	for (int i = 1; i < 11; i++) {
		printf("%d  ",square(i));
	}
	printf("\n");
	system("pause");
	return 0;
} 

int square(int z) {
	return z * z;
}
