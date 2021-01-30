#include<string.h>
#include"LinkList.h"

ElementType dataArray[] = { {1,"���첩ʿ"}, {2,"��"},{3,"��"},{4,"ʿ"} };

void TestLinkList();

int main()
{
	TestLinkList();
	return 0;
}

void TestLinkList()
{
	LinkList linkList;
	linkList.length = 0;	//���׺���
	InitLinkList(&linkList, dataArray, sizeof(dataArray) / sizeof(dataArray[0]));
	PrintLinklist(&linkList);
	ElementType element;
	element.id = 123;
	element.name = (char*)malloc(10);
	strcpy(element.name, "����1");
	InsertLinkList(&linkList, 2, element);
	printf("�����\n");
	PrintLinklist(&linkList);
}