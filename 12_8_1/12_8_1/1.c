#define MAXSIZE 1000
typedef struct
{
	int data;
	int cur;
}Component, StaticLinkList[MAXSIZE];

int InitList(StaticLinkList space)
{
	int i;
	for (i = 0; i < MAXSIZE - 1; i++)
		space[i].cur = i + 1;
	space[MAXSIZE - 1].cur = 0;
	return 1;
}

int InitList(StaticLinkList space)
{
	int i;
	for (i = 0; i < MAXSIZE - 1; i++)
		space[i].cur = i + 1;
	space[MAXSIZE - 1].cur = 0;
	return 1;
}
//我们对数组的第一个和最后一个元素做特殊处理，他们的data不存放数据
//我们通常把未使用的数组元素称为备用链表。
//数组的第一个元素，即下标为0的那个元素的cur就存放备用链表的第一个结点的下标
//数组的最后一个元素，即下标为MAXSIZE-1的cur就存放备用链表的第一个结点的下标，
//相当于单链表中的头结点作用

//在动态链表中，结点的申请和释放分别借用C语言的malloc()和free()两个函数来实现
//在静态链表中，操作的是数组，不存在像动态链表的结点申请和释放问题，
//所以我们需要自己实现这两个函数，才可以做到插入和删除操作
//为了辨明数组中那些分量未被使用，解决的办法是将所有未被使用过的及
//已被删除的用游标链成一个备用链表，应该如何操作呢？

//解决方法：将所有未被使用过的及已被删除的分量用游标链成一个备用的链表
//每当进行插入时，便可以从备用链表上去的第一个结点作为待插入的新结点。

//插入操作
int Malloc_SLL(StaticLinkList space)
{
	int i = space[0].cur;
	if (space[0].cur)
		space[0].cur = space[i].cur;
	//把它的下一个分量用来作为备用
	return i;
}

int ListInsert(StaticLinkList L, int i, int e)
{
	int j, k, l;
	if (i<1 || i>ListLength(L) + 1)
	{
		return 0;
	}
	j = Malloc_SLL(L);
	if (j)
	{
		L[j].data = e;
		for (i = 1; l <= i - 1; l++)
		{
			k = L[k].cur;
		}
		L[j].cur = L[k].cur;
		L[k].cur = j;

		return 1;
	}
	return 0;
}