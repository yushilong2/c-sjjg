#include"1.h"
//初始化顺序表
void InitList(SeqList* l)
{
	l->length = 0;
}
//建立顺序表
int CreatList(SeqList* l, int a[], int n)
{
	if (n > MAXSIZE)
	{
		printf("空间不够，无法建立顺序表。");
		return 0;
	}
	for (int k = 0; k < n; k++)
	{
		l->data[k] = a[k];
	}
	l->length = n;
	return 1;
}

//判空操作
int Empty(SeqList* l)
{
	if (l->length == 0)
		return 1;
	else
		return 0;
}

//求顺序表长度
int Length(SeqList* l)
{
	return l->length;
}

//遍历操作
void PrintList(SeqList* l)
{
	for (int i = 0; i < l->length; i++)
	{
		printf("%d", (l->data[i]));
	}
}

//按值查找
int Locate(SeqList* l,int x)
{
	for (int i = 0; i < l->length; i++)
	{
		if (l->data[i] == x)
		{
			return i + 1;
		}
		return 0;
	}
	return 1;
}

//按位查找
int Get(SeqList* l, int x, int* ptr)
{
	//若查找失败
	if (x<1 || x>l->length)
	{
		printf("查找位置非法");
		return 0;
	}	
	//若查找成功，通过指针ptr返回值
	else
	{
		*ptr = l->data[x];
		return 1;
	}
}

//插入操作
int Insert(SeqList* l, int x, int i)
{
	if (l->length > MAXSIZE)
	{
		printf("溢出");
		return 0;
	}
	if (i<1 || i>l->length)
	{
		printf("插入位置错误");
		return 0;
	}
	for (int k = l->length; k > i; k--) 
	{
		l->data[k] = l->data[k - 1];
	}
	l->data[i] = x;
	l->length++;
	return 1;
}

//删除操作
int Delete(SeqList* l, int i, int *ptr)
{
	if (l->length == 0)
	{
		printf("发生下溢错误");
		return 0;
	}
	if (i<1 || i>l->length)
	{
		printf("删除位置错误");
		return 0;
	}
	*ptr = l->data[i - 1];
	for (int j = i; j < l->length; j++)
	{
		l->data[j - 1] = l->data[j];
	}
	l->length--;
	return 1;
}

//修改操作
int Modify(SeqList* l, int i, int x)
{
	if (i<1 || i>l->length)
	{
		printf("修改位置错误");
		return 0;
	}
	l->data[i] = x;
	return 1;
}