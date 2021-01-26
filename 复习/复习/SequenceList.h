#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"

/*
*初始化顺序表
* @param seqList	要初始化的顺序表
* @param elemArray	初始化时要添加的元素内容数组
* @param length		初始化时添加的元素个数
*/
void InitList(SeqList* seqList, ElementType* elemArray, int length);
/*
*	向顺序表中的index下标处插入某个元素
* @param seqList
* @param index		要插入的下标
* @param element	要插入的元素
*/
void InsertElement(SeqList* seqList, int index, ElementType element);