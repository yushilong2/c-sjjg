#include<stdio.h>
int main()
{
	int i, sum = 0, n = 100;//执行一次
	for (i = 1; i < n; i++)//执行n+1次
	{
		sum = sum + i;//执行n次
	}
	printf("%d\n", sum);

	i = 0;
	sum = 0;
	n = 100;//执行一次
	sum = (1 + n) * n / 2;//执行一次
	printf("%d\n", sum);

	int j, x = 0; sum = 0; n = 100;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			x++;
			sum = sum + x;
		}
	}//100*100
	//我们研究算法的复杂度，
	//侧重的研究算法随着输入规模扩大增长量的一个抽象，
	//而不是精确地定位需要执行多少次

	return 0;
}
//算法是解决特定问题求解步骤的描述，在计算机中表现为指令的有限序列，并且每条指令表示一个或多个操作。