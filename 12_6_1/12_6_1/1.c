
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
//�������ɾ��
int ClearList(LinkList* L)
{
	LinkList p, q;
	p = (*L)->next;
	while (p)
	{
		q = p->next;
		free(p);
		p = q;//����p=p->next��ԭ������ɾ��ʱ��Ҫһ�����һ������ɾ����free(p)�Ƕ��������ɾ������Ҫ��q������һ��λ��
	}
	(*L)->next = NULL;
	
	return 1;
}

//�洢���䷽ʽ��
//˳��洢�ṹ��һ�������Ĵ洢��Ԫһ�δ洢���Ա������Ԫ��
//�����������ʽ�洢�ṹ����һ������Ĵ洢��Ԫ������Ա��Ԫ��
//ʱ�����ܣ�
//����//˳��洢�ṹO(1)//������O(n)
//�����ɾ��//˳��洢�ṹ��Ҫƽ���ƶ���һ���Ԫ�أ�ʱ��ΪO(n)//�������ڼ����ĳλ�õ�ָ��󣬲����ɾ��ʱ���ΪO(1)
//�ռ����ܣ�
//˳��洢�ṹ��ҪԤ����洢�ռ䣬�ִ���������ɿռ��˷ѣ���С�����׷������
//��������Ҫ����洢�ռ䣬ֻҪ�оͿ��Է��䣬Ԫ�ظ���Ҳ��������

//�����Ա���ҪƵ�����ң����ٽ��в����ɾ������ʱ���˲���˳��洢�ṹ
//����ҪƵ�������ɾ��ʱ���˲��õ�����ṹ