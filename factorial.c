#include<stdio.h>
#pragma warning(disable:4996)
int fac(int n)
{
	int i, sum = 1,temp;
	for (i = 2; i <= n; i++)
	{
		sum*= i ;
	}temp = sum;
}
int main()
{
	int n, j;
	printf("팩토리얼의 값은?");
	scanf("%d", &n);
	j = fac(n);
	printf("%d", j);
	return 0;
}