#include"contact.h"

void menu()
{
	printf("*********************************\n");
	printf("*** 1.add               2.del ***\n");
	printf("*** 3.search            4.modify*\n");
	printf("*** 5.show              0.exit***\n");
	printf("*********************************\n");
}

void main() 
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//���һǧ���˵���Ϣ
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			//����ͨѶ¼-�ͷŶ�̬���ٵ��ڴ�
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}