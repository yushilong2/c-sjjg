#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"

/*
*��ʼ��˳���
* @param seqList	Ҫ��ʼ����˳���
* @param elemArray	��ʼ��ʱҪ��ӵ�Ԫ����������
* @param length		��ʼ��ʱ��ӵ�Ԫ�ظ���
*/
void InitList(SeqList* seqList, ElementType* elemArray, int length);
/*
*	��˳����е�index�±괦����ĳ��Ԫ��
* @param seqList
* @param index		Ҫ������±�
* @param element	Ҫ�����Ԫ��
*/
void InsertElement(SeqList* seqList, int index, ElementType element);

ElementType* GetElement(SeqList* seqList, int index);

/*
* ɾ��˳�����ָ���±��Ԫ��
* @param seqList	Ҫ������˳���
* @param index		Ҫɾ�����±�
* @return			����ɾ����Ԫ��
*/
ElementType* DeleteElement(SeqList* seqList, int index);

void PrintList(SeqList* seqList);