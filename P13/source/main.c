#include<stdio.h>
#include<stdlib.h>

double pow(double, int);

int main(void) 
{
	int n;
	printf("計算3.5的n次方?請輸入n次方:");
	scanf_s("%d", &n);
	printf("3.5的%d次方:  %f\n",n,pow(3.5,n));

	system("pause");
	return 0;
}

double pow(double x, int n)
{
	double ans = 1;
	for (int i = 1; i <= n; i++) {
		ans = ans * x;
	}
	return ans;
}
