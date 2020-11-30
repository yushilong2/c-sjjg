#include<stdio.h>

void function1(int count);
void function2(int count, int n);
int main()
{
	int i, j, n = 10;
	for (i = 0; i < n; i++)
	{
		function1(i);
	}//O(n)

	for (i = 0; i < n; i++)
	{
		function2(i,n);
	}//O(n^2)

	n++;//1
	function1(n);//n
	for (i = 0; i < n; i++)
	{
		function2(i,n);
	}//n^2
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			printf("%d", j);
		}//n^2
	}//O(n^2)

	return 0;
}

void function1(int count)
{
	printf("%d", count);
}//O(1)

void function2(int count,int n)
{
	int j;
	for (j = count; j < n; j++)
	{
		printf("%d", j);
	}//O(n)
}

//常用的时间复杂度所耗费的时间从大到小依次是：
//O(1)<O(n)<O(logn)<O(n^2)<O(n^3)<o(2^n)<O(n!)<O(n^n)