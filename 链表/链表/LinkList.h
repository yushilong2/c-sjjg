#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"

/*
* 定义链表的特点：包含数据域和指针域
*/
typedef struct Node 
{
	ElementType data;	//数据域
	struct Node* next;	//指针域，指向下个结点
}Node;

/*
* 头结点
* 注意：我们在定义链表时，习惯性的会定义头结点，以便统一链表结点的插入和删除操作
* 头结点也可以成为首元结点，最后一个结点叫做尾元结点
*/
typedef struct LinkList 
{
	Node* next;		//头指针（如果链表有头结点，next就指向头结点，没有就指向第一个结点）
	int length;		//链表的长度，初始值为0
}LinkList;

/*初始化链表*/
void InitLinkList(LinkList* linkList, ElementType* dataArray, int length);

/*
* 在指定的位置pos处插入元素element
*/
void InsertLinkList(LinkList* linkList, int pos, ElementType element);

int IsLinkListEmpty(LinkList* linkList);

void PrintLinklist(LinkList* linkList);

int IsLinkListEmpty(LinkList* linkList);
/*
* 返回pos位置的元素
*/
ElementType GetLinkList(LinkList* linkList, int pos);