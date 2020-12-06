
typedef struct Node
{
	int data;//数据域
	struct Node* next;//指针域
}Node;
typedef struct Node* LinkList;
//头插法
void CreateListHead(LinkList* L, int n)
{
	LinkList p;
	int i;

	srand(time(0));//初始化随机数种子

	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;
	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(Node));//形成新链点
		p->data = rand() % 100 + 1;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}
//尾插法
void CreateListTail(LinkList* L, int n)
{
	LinkList p, r;
	int i;

	srand(time(0));

	*L = (LinkList)malloc(sizeof(Node));
	r = *L;

	for (i = 0; i < n; i++)
	{
		p = (Node*)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		r->next;
		r = p;
	}
	r->next - NULL;
}
//单链表的删除
int ClearList(LinkList* L)
{
	LinkList p, q;
	p = (*L)->next;
	while (p)
	{
		q = p->next;
		free(p);
		p = q;//不用p=p->next的原因：整表删除时需要一个结点一个结点的删除，free(p)是对整个结点删除，需要用q保存下一个位置
	}
	(*L)->next = NULL;
	
	return 1;
}

//存储分配方式：
//顺序存储结构用一段连续的存储单元一次存储线性表的数据元素
//单链表采用链式存储结构，用一组任意的存储单元存放线性表的元素
//时间性能：
//查找//顺序存储结构O(1)//单链表O(n)
//插入和删除//顺序存储结构需要平均移动表长一半的元素，时间为O(n)//单链表在计算出某位置的指针后，插入和删除时间仅为O(1)
//空间性能：
//顺序存储结构需要预分配存储空间，分大了容易造成空间浪费，分小了容易发生溢出
//单链表不需要分配存储空间，只要有就可以分配，元素个数也不受限制

//若线性表需要频繁查找，很少进行插入和删除操作时，宜采用顺序存储结构
//若需要频繁插入和删除时，宜采用单链表结构