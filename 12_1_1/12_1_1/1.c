#include<stdlib.h>
#include<malloc.h>
void unionL(List* La, list Lb);
int main()
{
	//S(n)=O(f(n))
	//�󡰸��Ӷȡ�����Ŀ�����û������˵����һ��ָ����ʱ�临�Ӷ�
	//���Ա��������������Ԫ����ɵ���������//ע�⣺���Ҳ����

	//InitList(*L):��ʼ������������һ���յ����Ա�L
	//ListEmpty(L):�ж����Ա��Ƿ�Ϊ�ձ������Ա�Ϊ�գ�����true�����򷵻�false
	//ClearList(*L):�����Ա����
	//GetElem(L,i,*e):�����Ա�L�еĵ�i��λ��Ԫ��ֵ���ظ�e
	//LocateElem(L,e):�����Ա�L�в��������ֵe��ȵ�Ԫ�أ�
	//������ҳɹ������ظ�Ԫ���ڱ�����ű�ʾ�ɹ�;���򣬷���0��ʾʧ��
	//ListInsert(*L,i,e):�����Ա�L�е�i��λ�ò�����Ԫ��e
	//ListDelete(*L,i,*e):ɾ�����Ա�L�е�i��λ��Ԫ�أ�����e������ֵ

	//Listlength(L);
	//GetElem(L,i,*e);
	//LocateElem(L,e);
	//ListInsert(*L,i,e);



	return 0;
}
//La��ʾA���ϣ�Lb��ʾB����
void unionL(List* La, list Lb)
{
	int La_len, Lb_len, i;
	ElemType e;
	La_len = ListLength(*La);
	Lb_len = ListLength(Lb);
	for (i = 1; i <= Lb_len; i++)
	{
		GetElem(Lb, i, &e);
		if(!LocateElem(*La,e))
		{
			ListInsert(La, ++La_len, e);
		}
	}
}