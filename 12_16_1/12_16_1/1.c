/*
* ��ϰǰ��Ķ���
* int char float double
*		�������� int x=0;
* ����  int arr[10]
*		�������� ������Ŷ��ͬ����
* ָ�� *p; int *p; char *p; int arr[3]; int (*p)[3]���������ȼ��ߣ�Ϊȷ�����ȼ�������//����ָ��;
*		�������� ������������ڴ浥Ԫ�ĵ�ַ
* �ṹ�� ѧ��������(char[20]) ����(int) �ɼ�(double)
*		ѧ�� stu;
*		struct ѧ��{����}
*		�������� ������ʾ���ж������Եĸ�������
* ����
*		�������� �������ͬ���Ͷ������
* *������ȱ�㣺��̬���䣬ʹ��ǰ��Ҫ���壬int arr[100]������Ŀռ�û�����պ�����
*			   ����ʹ��������Ԫ
* ����  �����˷������ȱ��
*		��̬����
*			malloc()
*		���Բ�����
*/

/*
struct STU
{
	//������������
	char name[20];
	int age;
};
*/

//int x[10];
//struct STU stu[100];
//
//typedef struct STU mystu;
//mystu stu[100];

/*
typedef struct STU
{
	char name[20];
	int age;
}mystu;
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}node, * pnode;

pnode creat()
{
	pnode head, temp, newNode;

	head = (pnode)malloc(sizeof(node));
	head->next = NULL;
}

//node//struct node
//pnode//struct node*

int main()
{
	//�û�����һЩ���� int ���鷽ʽ���� -1��������
	//int arr[50] = { 0 };
	//int count = 0;	//�����ж��ٸ�����
	//int temp = 0;	//������ �ݴ浱ǰ���������

	//while (temp != -1)
	//{
	//	scanf("%d",&temp);
	//	arr[count] = temp;
	//	count++;
	//}
	//for (int i = 0; i < count; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//�û�����һЩ�ַ� #���� ��̬����
	char ch = 0;//��ŵ�ǰ����
	while ((ch = getchar()) != '#')//����#��ѭ��
	{

		newNode = (char*)malloc(sizeof(char));//����һ���ֽ�
	}
}