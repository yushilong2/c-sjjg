#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//д���ݽṹ
//1.����һ����
//2.�������״̬����ʼ��--->��ʼ������
//3.����
//4.��ӡ����

//ѧ�š�ѧԺ��רҵ�����������䡢ѧ��
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
//1.1 ������ʲô���ṹ������ͽṹ�����������һ��
//1.2 ָ��ڶ��ֱ�Ϊ�����ķ�ʽ����̬�ڴ�����
//1.3 �õ�һ������ʾ��������

struct Node* createList()
{
	//�б�ͷ������һ����㲻�洢����
	//�ޱ�ͷ������һ�����洢����
	//1.����һ���ṹ�����
	struct Node* listHeadNode = (struct Node*)malloc(sizeof(struct Node));
	//��ʼ��һ������
	listHeadNode->next = NULL;
	return listHeadNode;
}

struct Node* createNode(struct student data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	//��ʼ��һ������
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}


//��������,¼����Ϣ
void insertNodeByHead(struct Node* listHeadNode, struct student data)
{
	struct Node* newNode = createNode(data);
	newNode->next = listHeadNode->next;
	listHeadNode->next = newNode;

}

//ɾ��
void deleteNodeByName(struct Node* listHeadNode, char*name)
{
	struct Node* posFrontNode = listHeadNode;
	struct Node* posNode = listHeadNode->next;
	if (posNode == NULL)
	{
		printf("���������\n");
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
				printf("���������\n");
				return;
			}
		}
		posFrontNode->next = posNode->next;
		free(posNode);
	}
}
//����
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
//��ӡ��
void printSearchNode(struct Node* curNod)
{
	printf("ѧ��\tѧԺ\tרҵ\t����\t����\tѧ��\n");
	printf("%s\t%s\t%s\t%s\t%d\t%f\t\n", curNod->data.num, curNod->data.college, curNod->data.major, curNod->data.name, curNod->data.age, curNod->data.grade);
}

//�����Ϣ
void printList(struct Node* listHeadNode)
{
	struct Node* pMove = listHeadNode->next;
	printf("ѧ��\tѧԺ\tרҵ\t����\t����\tѧ��\n");
	while (pMove)
	{
		printf("%s\t%s\t%s\t%s\t%d\t%f\t\n",pMove->data.num,pMove->data.college,pMove->data.major,pMove->data.name,pMove->data.age,pMove->data.grade);
		pMove = pMove->next;
	}
	printf("\n");
}
//����
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
