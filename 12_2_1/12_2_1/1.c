#include"1.h"
//��ʼ��˳���
void InitList(SeqList* l)
{
	l->length = 0;
}
//����˳���
int CreatList(SeqList* l, int a[], int n)
{
	if (n > MAXSIZE)
	{
		printf("�ռ䲻�����޷�����˳���");
		return 0;
	}
	for (int k = 0; k < n; k++)
	{
		l->data[k] = a[k];
	}
	l->length = n;
	return 1;
}

//�пղ���
int Empty(SeqList* l)
{
	if (l->length == 0)
		return 1;
	else
		return 0;
}

//��˳�����
int Length(SeqList* l)
{
	return l->length;
}

//��������
void PrintList(SeqList* l)
{
	for (int i = 0; i < l->length; i++)
	{
		printf("%d", (l->data[i]));
	}
}

//��ֵ����
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

//��λ����
int Get(SeqList* l, int x, int* ptr)
{
	//������ʧ��
	if (x<1 || x>l->length)
	{
		printf("����λ�÷Ƿ�");
		return 0;
	}	
	//�����ҳɹ���ͨ��ָ��ptr����ֵ
	else
	{
		*ptr = l->data[x];
		return 1;
	}
}

//�������
int Insert(SeqList* l, int x, int i)
{
	if (l->length > MAXSIZE)
	{
		printf("���");
		return 0;
	}
	if (i<1 || i>l->length)
	{
		printf("����λ�ô���");
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

//ɾ������
int Delete(SeqList* l, int i, int *ptr)
{
	if (l->length == 0)
	{
		printf("�����������");
		return 0;
	}
	if (i<1 || i>l->length)
	{
		printf("ɾ��λ�ô���");
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

//�޸Ĳ���
int Modify(SeqList* l, int i, int x)
{
	if (i<1 || i>l->length)
	{
		printf("�޸�λ�ô���");
		return 0;
	}
	l->data[i] = x;
	return 1;
}