#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("������������������");
	int n;
	scanf("%d", &n);
	printf("�����������");
	printf("%d",n);
	printf("������");
	int a[20];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int thissum = 0;
		for (int j = i; j < n; j++)
		{
			thissum = thissum + a[j];
			if (thissum > sum)
			{
				sum = thissum;
			}
		}
	}
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= 0)
		{
			m++;
		}
	}
	int b = 0;
	if (m == n)
	{
		printf("����Ӷκ�Ϊ��");
		printf("%d",b);
	}
	else
	{
		printf("����Ӷκ�Ϊ��");
		printf("%d", sum);
	}
	return 0;
}