/*
* 数据结构的基本结构：链式结构
*/
#include"singleList.h"
struct Node* list = createList();
void systemMenu()
{
	printf("----------------【学生管理系统】----------------\n");
	printf("\t\t0.退出系统\n");
	printf("\t\t1.插入信息\n");
	printf("\t\t2.浏览信息\n");
	printf("\t\t3.删除信息\n");
	printf("\t\t4.修改信息\n");
	printf("\t\t5.查找信息\n");
	printf("\t\t6.保存信息\n");
	//隐藏功能：同步文件
	printf("------------------------------------------------\n");
	printf("请输入(0-6):");
}
void keyDown()
{
	int userKey;
	struct student tempData;
	scanf("%d", &userKey);
	switch (userKey)
	{
	case 0:
		printf("\t\t0.退出系统\n");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("\t\t1.插入信息\n");
		printf("请输入学号、学院、专业、姓名、年龄、学分:\n");
		scanf("%s%s%s%s%d%f", tempData.num, tempData.college, tempData.major, tempData.name, &tempData.age, &tempData.grade);
		insertNodeByHead(list, tempData);
		break;
	case 2:
		printf("\t\t2.浏览信息\n");
		printList(list);
		break;
	case 3:
		printf("\t\t3.删除信息\n");
		printf("请输入要删除的学生姓名：");
		scanf("%s", tempData.num);
		deleteNodeByName(list, tempData.num);
		break;
	case 4:
		printf("\t\t4.修改信息\n");
		printf("请输入要修改的学生学号：");
		scanf("%s", tempData.num);
		if (searchByNum(list, tempData.num) == NULL)
		{
			printf("未找到相关信息\n");
		}
		else
		{
			struct Node* curNod = searchByNum(list, tempData.num);
			printf("请输入新的学号、学院、专业、姓名、年龄、学分:\n");
			scanf("%s\t%s\t%s\t%s\t%d\t%f\t", curNod->data.num, curNod->data.college, curNod->data.major, curNod->data.name, &curNod->data.age, &curNod->data.grade);
		}
		break;
	case 5:
		printf("\t\t5.查找信息\n");
		printf("请输入需要查找的学号：\n");
		scanf("%s", tempData.num);
		if (searchByNum(list, tempData.num) == NULL)
		{
			printf("未找到相关信息\n");
		}
		else
		{
			printSearchNode(searchByNum(list, tempData.num));
		}
		break;
	case 6:
		saveFile("student.txt", list);
			break;
	default:
		printf("输入错误，请重新输入\n");
	}
}

int main()
{
	list = createList();
	while (1)
	{
		systemMenu();
		keyDown();
		system("pause");
		system("cls");
	}
	return 0;
}