
typedef struct Node
{
	int data;//������
	struct Node* next;//ָ����
}Node;
typedef struct Node* LinkList;
//ͷ�巨
void CreateListHead(LinkList* L, int n)
{
	LinkList p;
	int i;

	srand(time(0));//��ʼ�����������

	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;
	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(Node));//�γ�������
		p->data = rand() % 100 + 1;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}
//β�巨
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