/*
* 复习前面的东西
* int char float double
*		数据类型 int x=0;
* 数组  int arr[10]
*		数据类型 用来存放多个同类型
* 指针 *p; int *p; char *p; int arr[3]; int (*p)[3]方括号优先级高，为确保优先级加括号//数组指针;
*		数据类型 用来存放其他内存单元的地址
* 结构体 学生：名字(char[20]) 年龄(int) 成绩(double)
*		学生 stu;
*		struct 学生{属性}
*		数据类型 用来表示具有多种属性的复杂数据
* 链表
*		数据类型 用来存放同类型多个数据
* *数组有缺点：静态分配，使用前需要定义，int arr[100]，多余的空间没法回收和扩充
*			   必须使用连续单元
* 链表  用来克服数组的缺点
*		动态分配
*			malloc()
*		可以不连续
*/

/*
struct STU
{
	//其他数据类型
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
int main()
{
	//用户输入一些数据 int 数组方式来做 -1结束输入
	//int arr[50] = { 0 };
	//int count = 0;	//现在有多少个数字
	//int temp = 0;	//工具人 暂存当前输入的数字

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

	//用户输入一些字符 #结束 动态分配
	char ch = 0;//存放当前输入
	while (ch != '#')
	{
		scanf("%c", &ch);
		p = (char*)malloc(sizeof(char));//申请一个字节
	}
}