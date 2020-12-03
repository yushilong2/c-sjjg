//线性表的顺序存储结构，在存、读数据时，
//不管是哪个位置，时间复杂度都是O(1)
//而在插入或删除时，时间复杂度都是O(n)

//线性表顺序存储结构的优缺点

//优点：
//无需为表示表中元素之间的逻辑关系而增加额外的存储空间
//可以快速地存取表中任意位置的元素

//缺点：
//插入和删除操作需要移动大量元素
//当线性表长度变化较大时，难以确定存储空间的容量
//容易造成存储空间的“碎片”

//线性表的链式存储结构的特点
//是用一组任意的存储单元存储线性表的数据元素，
//这组存储单元可以存在内存中未被占用的任意位置

//链表中的第一个结点的存储位置叫做头指针
//最后一个结点指针为空（NULL）
//常用头指针冠以链表的名字
//无论链表是否为空，头指针均不为空
//头指针是链表的必要元素
typedef struct Node
{
	int data;//数据域
	struct Node* next;//指针域
}Node;
typedef struct Node* LinkList;

//按位查找
int GetElem(LinkList L, int i, int* e)
{
	int j;
	LinkList p;

	p = L->next;
	j = 1;

	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
	{
		return 0;
	}
	*e = p->data;
	return 1;
}

//插入
int ListInsert(LinkList* L, int i, int e)
{
	int j;
	LinkList p, s;
	
	p = *L;
	j = 1;

	while (p && j < i)//用于寻找第i个结点
	{
		p = p->next;
		j++;
	}
	if (!p || j > i)
	{
		return 0;
	}
	s = (LinkList)malloc(sizeof(Node));
	s->data = e;

	s->next = p->next;
	p->next = s;

	return 1;
}

//删除
int ListInsert(LinkList* L, int i, int* e)
{
	int j;
	LinkList p, q;

	p = *L;
	j = 1;

	while (p->next && j < i)//用于寻找第i个结点
	{
		p = p->next;
		j++;
	}
	if (!(p->next) || j > i)
	{
		return 0;
	}
	q = p->next;
	p->next = q->next;

	*e = q->data;
	free(q);

	return 1;
}

