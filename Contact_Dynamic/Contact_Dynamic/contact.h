#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define MAX 1000
#define DEFAULT_SZ 3

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
};

//1.��ź��ѵ���Ϣ
struct PeoInfo
{
	char name[20];//����
	int age;//����
	char sex[5];//�Ա�
	char tele[12];//�绰
	char addr[30];//סַ
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo* data;//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
};
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);
//����
void AddContact(struct Contact* ps);
//��ʾ
void ShowContact(const struct Contact* ps);
//ɾ��
void DelContact(struct Contact* ps);
//����
void SearchContact(struct Contact* ps);
//�޸�
void ModifyContact(struct Contact* ps);
//�ͷ�
void DestroyContact(struct Contact* ps);