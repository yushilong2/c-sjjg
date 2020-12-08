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
//���Ƕ�����ĵ�һ�������һ��Ԫ�������⴦�����ǵ�data���������
//����ͨ����δʹ�õ�����Ԫ�س�Ϊ��������
//����ĵ�һ��Ԫ�أ����±�Ϊ0���Ǹ�Ԫ�ص�cur�ʹ�ű�������ĵ�һ�������±�
//��������һ��Ԫ�أ����±�ΪMAXSIZE-1��cur�ʹ�ű�������ĵ�һ�������±꣬
//�൱�ڵ������е�ͷ�������

//�ڶ�̬�����У�����������ͷŷֱ����C���Ե�malloc()��free()����������ʵ��
//�ھ�̬�����У������������飬��������̬����Ľ��������ͷ����⣬
//����������Ҫ�Լ�ʵ���������������ſ������������ɾ������
//Ϊ�˱�����������Щ����δ��ʹ�ã�����İ취�ǽ�����δ��ʹ�ù��ļ�
//�ѱ�ɾ�������α�����һ����������Ӧ����β����أ�

//���������������δ��ʹ�ù��ļ��ѱ�ɾ���ķ������α�����һ�����õ�����
//ÿ�����в���ʱ������Դӱ���������ȥ�ĵ�һ�������Ϊ��������½�㡣

//�������
int Malloc_SLL(StaticLinkList space)
{
	int i = space[0].cur;
	if (space[0].cur)
		space[0].cur = space[i].cur;
	//��������һ������������Ϊ����
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