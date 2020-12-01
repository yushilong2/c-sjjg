#include<stdlib.h>
#include<malloc.h>
void unionL(List* La, list Lb);
int main()
{
	//S(n)=O(f(n))
	//求“复杂度”的题目，如果没有特殊说明，一般指的是时间复杂度
	//线性表：由零个或多个数据元素组成的有限序列//注意：零个也可以

	//InitList(*L):初始化操作，建立一个空的线性表L
	//ListEmpty(L):判断线性表是否为空表，若线性表为空，返回true，否则返回false
	//ClearList(*L):将线性表清空
	//GetElem(L,i,*e):将线性表L中的第i个位置元素值返回给e
	//LocateElem(L,e):在线性表L中查找与给定值e相等的元素，
	//如果查找成功，返回该元素在表中序号表示成功;否则，返回0表示失败
	//ListInsert(*L,i,e):在线性表L中第i个位置插入新元素e
	//ListDelete(*L,i,*e):删除线性表L中第i个位置元素，并用e返回其值

	//Listlength(L);
	//GetElem(L,i,*e);
	//LocateElem(L,e);
	//ListInsert(*L,i,e);



	return 0;
}
//La表示A集合，Lb表示B集合
void unionL(List* La, list Lb)
{
	int La_len, Lb_len, i;
	ElemType e;
	La_len = ListLength(*La);
	Lb_len = ListLength(Lb);
	for (i = 1; i <= Lb_len; i++)
	{
		GetElem(Lb, i, &e);
		if(!LocateElem(*La,e))
		{
			ListInsert(La, ++La_len, e);
		}
	}
}