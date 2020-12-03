//���Ա��˳��洢�ṹ���ڴ桢������ʱ��
//�������ĸ�λ�ã�ʱ�临�Ӷȶ���O(1)
//���ڲ����ɾ��ʱ��ʱ�临�Ӷȶ���O(n)

//���Ա�˳��洢�ṹ����ȱ��

//�ŵ㣺
//����Ϊ��ʾ����Ԫ��֮����߼���ϵ�����Ӷ���Ĵ洢�ռ�
//���Կ��ٵش�ȡ��������λ�õ�Ԫ��

//ȱ�㣺
//�����ɾ��������Ҫ�ƶ�����Ԫ��
//�����Ա��ȱ仯�ϴ�ʱ������ȷ���洢�ռ������
//������ɴ洢�ռ�ġ���Ƭ��

//���Ա����ʽ�洢�ṹ���ص�
//����һ������Ĵ洢��Ԫ�洢���Ա������Ԫ�أ�
//����洢��Ԫ���Դ����ڴ���δ��ռ�õ�����λ��

//�����еĵ�һ�����Ĵ洢λ�ý���ͷָ��
//���һ�����ָ��Ϊ�գ�NULL��
//����ͷָ��������������
//���������Ƿ�Ϊ�գ�ͷָ�����Ϊ��
//ͷָ��������ı�ҪԪ��
typedef struct Node
{
	int data;//������
	struct Node* next;//ָ����
}Node;
typedef struct Node* LinkList;

//��λ����
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

//����
int ListInsert(LinkList* L, int i, int e)
{
	int j;
	LinkList p, s;
	
	p = *L;
	j = 1;

	while (p && j < i)//����Ѱ�ҵ�i�����
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

//ɾ��
int ListInsert(LinkList* L, int i, int* e)
{
	int j;
	LinkList p, q;

	p = *L;
	j = 1;

	while (p->next && j < i)//����Ѱ�ҵ�i�����
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

