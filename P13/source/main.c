#include<stdio.h>
#include<stdlib.h>

double pow(double, int);

int main(void) 
{
	int n;
	printf("�p��3.5��n����?�п�Jn����:");
	scanf_s("%d", &n);
	printf("3.5��%d����:  %f\n",n,pow(3.5,n));

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
