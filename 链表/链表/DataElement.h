#define MAX_SIZE 255
#define TRUE 1
#define FALSE 0

//1.��������Ԫ��
//typedef int ElementType;
/*
* datas={{1,""},{2,""},{3,""}};
*/
typedef struct
{
	int id;
	char* name;
}ElementType;

//2.����˳���ṹ
typedef struct
{
	ElementType datas[MAX_SIZE];//˳����е�����Ԫ�ؼ���
	int length;//��ǰ˳����е�Ԫ�ظ���
}SeqList;