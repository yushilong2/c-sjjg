#include"SequenceLIst.h"

/*
*��ʼ��˳���
* @param seqList	Ҫ��ʼ����˳���
* @param elemArray	��ʼ��ʱҪ��ӵ�Ԫ����������
* @param length		��ʼ��ʱ��ӵ�Ԫ�ظ���
*/
void InitList(SeqList* seqList, ElementType* elemArray, int length)
{
	
}
/*
*	��˳����е�index�±괦����ĳ��Ԫ��
* @param seqList
* @param index		Ҫ������±�
* @param element	Ҫ�����Ԫ��
*/
void InsertElement(SeqList* seqList, int index, ElementType element)
{
	//1.��֤������Ԫ�ؿռ��Ƿ񳬹�MAX_SIZE
	//2.index��ֵ�Ƿ�Ϸ�[0,MAX_SIZE-1]
	//3.�����indexӦ����length֮��
	//4.�ӵ�length-1���±꿪ʼ��ǰ��һ��Ԫ�ظ�ֵ������һ��Ԫ��
	if (seqList->length + 1 >= MAX_SIZE)
	{
		printf("��������������Ԫ��ʧ�ܣ�\n");
		return;
	}
	if (index<0 || index>MAX_SIZE - 1)
	{
		printf("ֻ����������±귶Χ�ڲ���Ԫ��[0,%d]\n", MAX_SIZE - 1);
		return;
	}
	if (index > seqList->length)
	{
		printf("������±곬�����������󳤶�-1������ʧ�ܣ�\n");
		return;
	}
	//��C89��׼�в�������for��ֱ�Ӷ������
	//C99���Ժ��������
	for(int i=seqList->length-1;i>index;i--)
	{
		seqList->datas[i + 1] = seqList->datas[i];
	}
	//5.��Ҫ�����ֵ������index��Ԫ��
}