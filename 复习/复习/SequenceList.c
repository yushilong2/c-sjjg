#include"SequenceList.h"

/*
*��ʼ��˳���
* @param seqList	Ҫ��ʼ����˳���
* @param elemArray	��ʼ��ʱҪ��ӵ�Ԫ����������
* @param length		��ʼ��ʱ��ӵ�Ԫ�ظ���
*/
void InitList(SeqList* seqList, ElementType* elemArray, int length)
{
	if (length > MAX_SIZE)
	{
		printf("����������������������ʼ��ʧ�ܣ�\n");
		return;
	}
	seqList->length = 0;//�ǵ��ڳ�ʼ��˳���ʱ��˳���ĳ�������
	for (int i = 0;i < length;i++)
	{
		//ÿ��ѭ�������±�Ϊi��λ�ò���һ��Ԫ��
		InsertElement(seqList, i, elemArray[i]);
	}
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
	seqList->datas[index] = element;
	//6.˳�����ܳ���+1���ǳ�����©����
	seqList->length ++;
}


ElementType* GetElement(SeqList* seqList, int index)
{
	if (index<0 || index>MAX_SIZE - 1)
	{
		printf("�±�Խ�磬�޷��ҵ�ָ���±��Ԫ�أ�\n");
		return NULL;
	}
	ElementType* element;//Ҫ���ҵ�Ԫ��
	element = &seqList->datas[index];
	return element;
}

ElementType* DeleteElement(SeqList* seqList, int index)
{
	if (index<0 || index>MAX_SIZE - 1)
	{
		printf("�±�Խ�磬�޷�ɾ��ָ���±��Ԫ�أ�\n");
		return NULL;
	}
	//1.�ҵ�Ҫɾ����Ԫ��,�����������Ա㷵��
	ElementType* delElement=(ElementType*)malloc(sizeof(ElementType));
	//�������岢���ò��Һ���������Ҫɾ��Ԫ�ص�ָ��
	*delElement = *GetElement(seqList, index);
	//2.��ָ��λ��ɾ��������һ��Ԫ�ظ�ֵ��ǰ��һ��Ԫ��
	for (int i = index;i < seqList->length - 1;i++)
	{
		seqList->datas[i] = seqList->datas[i + 1];
	}
	//3.˳�����ܳ���-1
	seqList->length--;
	return delElement;	//����ʹ����Ϻ����free,���������ڴ�й©
}


void PrintList(SeqList* seqList)
{
	for(int i=0;i<seqList->length;i++)
	{
		printf("%d\t%s\n", seqList->datas[i].id, seqList->datas[i].name);
	}
}
