#include<stdio.h>
int main()
{
	//T(n)=O(f(n))

	//������
	int sum = 0, n = 100;
	printf("I love fishc.com\n");
	printf("I love Fishc.com\n");
	printf("I love fishC.com\n");
	printf("I love fIshc.com\n");
	printf("I love FishC.com\n");
	printf("I love fishc.com\n");
	sum = (1 + n) * n / 2;
	//O(1)

	//���Խ�
	int i, n = 100;
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + i;
	}

	//ƽ����
	int j, n = 100;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("I love FishC.com\n");
		}
	}

	n = 100;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			printf("I love FishC.com\n");
		}
	}//-n+(n-1)+(n-2)+����+1=n(n+1)/2
	//O(n^2)

	//������
	i = 1; n = 100;
	while (i < n)
	{
		i = i * 2;
	}//O(logn)

	return 0;
}