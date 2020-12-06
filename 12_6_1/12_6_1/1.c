
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