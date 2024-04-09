#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("请您输入整数个数：");
	int n;
	scanf("%d", &n);
	printf("请您逐个输入");
	printf("%d",n);
	printf("整数：");
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
		printf("最大子段和为：");
		printf("%d",b);
	}
	else
	{
		printf("最大子段和为：");
		printf("%d", sum);
	}
	return 0;
}