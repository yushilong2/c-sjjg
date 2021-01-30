#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"

/*
* ����������ص㣺�����������ָ����
*/
typedef struct Node 
{
	ElementType data;	//������
	struct Node* next;	//ָ����ָ���¸����
}Node;

/*
* ͷ���
* ע�⣺�����ڶ�������ʱ��ϰ���ԵĻᶨ��ͷ��㣬�Ա�ͳһ������Ĳ����ɾ������
* ͷ���Ҳ���Գ�Ϊ��Ԫ��㣬���һ��������βԪ���
*/
typedef struct LinkList 
{
	Node* next;		//ͷָ�루���������ͷ��㣬next��ָ��ͷ��㣬û�о�ָ���һ����㣩
	int length;		//����ĳ��ȣ���ʼֵΪ0
}LinkList;

/*��ʼ������*/
void InitLinkList(LinkList* linkList, ElementType* dataArray, int length);

/*
* ��ָ����λ��pos������Ԫ��element
*/
void InsertLinkList(LinkList* linkList, int pos, ElementType element);

int IsLinkListEmpty(LinkList* linkList);

void PrintLinklist(LinkList* linkList);

int IsLinkListEmpty(LinkList* linkList);
/*
* ����posλ�õ�Ԫ��
*/
ElementType GetLinkList(LinkList* linkList, int pos);