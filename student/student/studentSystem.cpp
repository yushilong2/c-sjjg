/*
* ���ݽṹ�Ļ����ṹ����ʽ�ṹ
*/
#include"singleList.h"
struct Node* list = createList();
void systemMenu()
{
	printf("----------------��ѧ������ϵͳ��----------------\n");
	printf("\t\t0.�˳�ϵͳ\n");
	printf("\t\t1.������Ϣ\n");
	printf("\t\t2.�����Ϣ\n");
	printf("\t\t3.ɾ����Ϣ\n");
	printf("\t\t4.�޸���Ϣ\n");
	printf("\t\t5.������Ϣ\n");
	printf("\t\t6.������Ϣ\n");
	//���ع��ܣ�ͬ���ļ�
	printf("------------------------------------------------\n");
	printf("������(0-6):");
}
void keyDown()
{
	int userKey;
	struct student tempData;
	scanf("%d", &userKey);
	switch (userKey)
	{
	case 0:
		printf("\t\t0.�˳�ϵͳ\n");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("\t\t1.������Ϣ\n");
		printf("������ѧ�š�ѧԺ��רҵ�����������䡢ѧ��:\n");
		scanf("%s%s%s%s%d%f", tempData.num, tempData.college, tempData.major, tempData.name, &tempData.age, &tempData.grade);
		insertNodeByHead(list, tempData);
		break;
	case 2:
		printf("\t\t2.�����Ϣ\n");
		printList(list);
		break;
	case 3:
		printf("\t\t3.ɾ����Ϣ\n");
		printf("������Ҫɾ����ѧ��������");
		scanf("%s", tempData.num);
		deleteNodeByName(list, tempData.num);
		break;
	case 4:
		printf("\t\t4.�޸���Ϣ\n");
		printf("������Ҫ�޸ĵ�ѧ��ѧ�ţ�");
		scanf("%s", tempData.num);
		if (searchByNum(list, tempData.num) == NULL)
		{
			printf("δ�ҵ������Ϣ\n");
		}
		else
		{
			struct Node* curNod = searchByNum(list, tempData.num);
			printf("�������µ�ѧ�š�ѧԺ��רҵ�����������䡢ѧ��:\n");
			scanf("%s\t%s\t%s\t%s\t%d\t%f\t", curNod->data.num, curNod->data.college, curNod->data.major, curNod->data.name, &curNod->data.age, &curNod->data.grade);
		}
		break;
	case 5:
		printf("\t\t5.������Ϣ\n");
		printf("��������Ҫ���ҵ�ѧ�ţ�\n");
		scanf("%s", tempData.num);
		if (searchByNum(list, tempData.num) == NULL)
		{
			printf("δ�ҵ������Ϣ\n");
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
		printf("�����������������\n");
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