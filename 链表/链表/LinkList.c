#include"LinkList.h"
/*��ʼ������*/
void InitLinkList(LinkList* linkList, ElementType* dataArray, int length)
{
	for (int i = 0;i < length;i++)
	{
		InsertLinkList(linkList, i + 1, dataArray[i]);
	}
}

/*
* ��ָ����λ��pos������Ԫ��element
*/
void InsertLinkList(LinkList* linkList, int pos, ElementType element)
{
	//1.�����սڵ㲢Ϊ������ֵ
	Node* node = ( Node* )malloc( sizeof(Node) );
	node->data = element;
	node->next = NULL;
	//2.�ҵ�Ҫ����λ�õĽ��
	if (pos == 1)	//���������ǵ�һ��Ԫ��
	{
		linkList->next = node;
		linkList->length++;
		return;
	}
	//ͨ��ѭ���ҵ�Ҫ����Ľ��λ��
	Node* curNode = linkList->next;
	for (int i = 1;curNode && i < pos - 1;i++)
	{
		curNode = curNode->next;
	}
	//3.�������벢�Խ�ǰ��Ľ��
	if (curNode)
	{
		node->next = curNode->next;
		curNode->next = node;
		linkList->length++;
	}
}

void PrintLinklist(LinkList* linkList)
{
	Node* node = linkList->next;
	if (!node)
	{
		printf("����Ϊ�գ�\n");
		linkList->length = 0;
		return;
	}
	for (int i = 0;i < linkList->length;i++)
	{
		printf("%d\t%s\n", node->data.id, node->data.name);
		node = node->next;
	}
}

int IsLinkListEmpty(LinkList* linkList)
{
	return linkList->length == 0 ? TRUE : FALSE;
}

/*
* ����posλ�õ�Ԫ��
*/
ElementType GetLinkList(LinkList* linkList, int pos)
{
	Node* node = linkList->next;
	for (int i = 1;node && i < pos;i++)
	{
		node = node->next;
	}
	return node->data;
}