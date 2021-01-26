#include"SequenceLIst.h"

/*
*初始化顺序表
* @param seqList	要初始化的顺序表
* @param elemArray	初始化时要添加的元素内容数组
* @param length		初始化时添加的元素个数
*/
void InitList(SeqList* seqList, ElementType* elemArray, int length)
{
	
}
/*
*	向顺序表中的index下标处插入某个元素
* @param seqList
* @param index		要插入的下标
* @param element	要插入的元素
*/
void InsertElement(SeqList* seqList, int index, ElementType element)
{
	//1.验证插入后的元素空间是否超过MAX_SIZE
	//2.index的值是否合法[0,MAX_SIZE-1]
	//3.插入的index应该在length之内
	//4.从第length-1个下标开始，前面一个元素赋值给后面一个元素
	if (seqList->length + 1 >= MAX_SIZE)
	{
		printf("数组已满，插入元素失败！\n");
		return;
	}
	if (index<0 || index>MAX_SIZE - 1)
	{
		printf("只能在允许的下标范围内插入元素[0,%d]\n", MAX_SIZE - 1);
		return;
	}
	if (index > seqList->length)
	{
		printf("插入的下标超过了数组的最大长度-1，插入失败！\n");
		return;
	}
	//在C89标准中不允许在for中直接定义变量
	//C99中以后就允许了
	for(int i=seqList->length-1;i>index;i--)
	{
		seqList->datas[i + 1] = seqList->datas[i];
	}
	//5.将要插入的值赋给第index个元素
}