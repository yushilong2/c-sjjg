#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//写数据结构
//1.抽象单一个体
//2.描述最初状态：初始化--->初始化变量
//3.插入
//4.打印遍历

//学号、学院、专业、姓名、年龄、学分
struct student
{
	char num[12];
	char college[20];
	char major[20];
	char name[20];
	int age;
	float grade;
};
struct Node
{
	struct student data;
	struct Node* next;
};
//1.1 链表是什么：结构体变量和结构体变量链接在一起
//1.2 指针第二种变为变量的方式：动态内存申请
//1.3 用第一个结点表示整个链表

struct Node* createList()
{
	//有表头链表：第一个结点不存储数据
	//无表头链表：第一个结点存储数据
	//1.产生一个结构体变量
	struct Node* listHeadNode = (struct Node*)malloc(sizeof(struct Node));
	//初始化一个变量
	listHeadNode->next = NULL;
	return listHeadNode;
}

struct Node* createNode(struct student data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	//初始化一个变量
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}


//插入链表,录入信息
void insertNodeByHead(struct Node* listHeadNode, struct student data)
{
	struct Node* newNode = createNode(data);
	newNode->next = listHeadNode->next;
	listHeadNode->next = newNode;

}

//删除
void deleteNodeByName(struct Node* listHeadNode, char*name)
{
	struct Node* posFrontNode = listHeadNode;
	struct Node* posNode = listHeadNode->next;
	if (posNode == NULL)
	{
		printf("无相关内容\n");
		return;
	}
	else
	{
		while (strcmp(posNode->data.name,name))
		{
			posFrontNode = posNode;
			posNode = posFrontNode->next;
			if (posNode == NULL)
			{
				printf("无相关内容\n");
				return;
			}
		}
		posFrontNode->next = posNode->next;
		free(posNode);
	}
}
//查找
struct Node* searchByNum(struct Node* listHeadNode, char* num)
{
	struct Node* pMove = listHeadNode->next;
	if (pMove == NULL)
	{
		return pMove;
	}
	else
	{
		while (strcmp(pMove->data.num,num))
		{
			pMove = pMove->next;
			if (pMove == NULL)
			{
				break;
			}
		}
		return pMove;
	}
}
//打印：
void printSearchNode(struct Node* curNod)
{
	printf("学号\t学院\t专业\t姓名\t年龄\t学分\n");
	printf("%s\t%s\t%s\t%s\t%d\t%f\t\n", curNod->data.num, curNod->data.college, curNod->data.major, curNod->data.name, curNod->data.age, curNod->data.grade);
}

//浏览信息
void printList(struct Node* listHeadNode)
{
	struct Node* pMove = listHeadNode->next;
	printf("学号\t学院\t专业\t姓名\t年龄\t学分\n");
	while (pMove)
	{
		printf("%s\t%s\t%s\t%s\t%d\t%f\t\n",pMove->data.num,pMove->data.college,pMove->data.major,pMove->data.name,pMove->data.age,pMove->data.grade);
		pMove = pMove->next;
	}
	printf("\n");
}
//保存
void saveFile(const char* fileName, struct Node* listHeadNode)
{
	FILE* fp = fopen(fileName, "w");
	if (fp == NULL)
	{
		fp = fopen(fileName, "w");
	}
	struct Node* pMove = listHeadNode->next;
	while (pMove)
	{
		fprintf(fp,"%s\t%s\t%s\t%s\t%d\t%f\t\n", pMove->data.num, pMove->data.college, pMove->data.major, pMove->data.name, pMove->data.age, pMove->data.grade);
		pMove = pMove->next;
	}
	fclose(fp);
}
