#define MAX_SIZE 255
#define TRUE 1
#define FALSE 0

//1.定义数据元素
//typedef int ElementType;
/*
* datas={{1,""},{2,""},{3,""}};
*/
typedef struct
{
	int id;
	char* name;
}ElementType;

//2.定义顺序表结构
typedef struct
{
	ElementType datas[MAX_SIZE];//顺序表中的数据元素集合
	int length;//当前顺序表中的元素个数
}SeqList;