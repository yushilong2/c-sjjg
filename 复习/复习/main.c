#include"DataElement.h"

ElementType dataArray[] = { {0,"���첩ʿ"}, {1,"��"},{2,"��"},{3,"ʿ"} };

void TestSequenceList();

int main()
{
	TestSequenceList();
	return 0;
}

void TestSequenceList()
{
	SeqList seqList;	//Ҫ������˳���
	ElementType* delElement;
	InitList(&seqList,dataArray,sizeof(dataArray)/sizeof(dataArray[0]));
	printf("��ʼ����\n");
	PrintList(&seqList);

	delElement = DeleteElement(&seqList, 2);
	printf("ɾ����\n");
	PrintList(&seqList);
	printf("��ɾ����Ԫ��\n");
	printf("%d\t%s\n", delElement->id, delElement->name);
	free(delElement);	//һ��Ҫ�ǵ��ͷ��ڴ�
}