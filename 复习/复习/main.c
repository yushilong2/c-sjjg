#include"DataElement.h"

ElementType dataArray[] = { {0,"奇异博士"}, {1,"异"},{2,"博"},{3,"士"} };

void TestSequenceList();

int main()
{
	TestSequenceList();
	return 0;
}

void TestSequenceList()
{
	SeqList seqList;	//要操作的顺序表
	ElementType* delElement;
	InitList(&seqList,dataArray,sizeof(dataArray)/sizeof(dataArray[0]));
	printf("初始化后\n");
	PrintList(&seqList);

	delElement = DeleteElement(&seqList, 2);
	printf("删除后\n");
	PrintList(&seqList);
	printf("被删除的元素\n");
	printf("%d\t%s\n", delElement->id, delElement->name);
	free(delElement);	//一定要记得释放内存
}