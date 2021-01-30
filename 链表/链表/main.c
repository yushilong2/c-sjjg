#include<string.h>
#include"LinkList.h"

ElementType dataArray[] = { {1,"ÆæÒì²©Ê¿"}, {2,"Òì"},{3,"²©"},{4,"Ê¿"} };

void TestLinkList();

int main()
{
	TestLinkList();
	return 0;
}

void TestLinkList()
{
	LinkList linkList;
	linkList.length = 0;	//ÈİÒ×ºöÂÔ
	InitLinkList(&linkList, dataArray, sizeof(dataArray) / sizeof(dataArray[0]));
	PrintLinklist(&linkList);
	ElementType element;
	element.id = 123;
	element.name = (char*)malloc(10);
	strcpy(element.name, "²âÊÔ1");
	InsertLinkList(&linkList, 2, element);
	printf("²åÈëºó£º\n");
	PrintLinklist(&linkList);
}