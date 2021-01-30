#include"LinkList.h"
/*初始化链表*/
void InitLinkList(LinkList* linkList, ElementType* dataArray, int length)
{
	for (int i = 0;i < length;i++)
	{
		InsertLinkList(linkList, i + 1, dataArray[i]);
	}
}

/*
* 在指定的位置pos处插入元素element
*/
void InsertLinkList(LinkList* linkList, int pos, ElementType element)
{
	//1.创建空节点并为数据域赋值
	Node* node = ( Node* )malloc( sizeof(Node) );
	node->data = element;
	node->next = NULL;
	//2.找到要插入位置的结点
	if (pos == 1)	//如果插入的是第一个元素
	{
		linkList->next = node;
		linkList->length++;
		return;
	}
	//通过循环找到要插入的结点位置
	Node* curNode = linkList->next;
	for (int i = 1;curNode && i < pos - 1;i++)
	{
		curNode = curNode->next;
	}
	//3.将结点插入并对接前面的结点
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
		printf("链表为空！\n");
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
* 返回pos位置的元素
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