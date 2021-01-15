#include"contact.h"
void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

CheckCapacity(struct Contact*ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}
//2.���Ӻ�����Ϣ
void AddContact(struct Contact* ps)
{
	/*if (ps->size == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", ps->data[ps->size].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰��");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ��");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}*/
	//��⵱ǰͨѶ¼����
	//������˾����ӿռ�
	//�������ɶ�¶�����
	CheckCapacity(ps);
	//��������
	printf("���������֣�");
	scanf("%s", ps->data[ps->size].name);
	printf("���������䣺");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰��");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ��");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
}

static int FindByName(const struct Contact* ps, char name[20])
{
	int i = 0;
	for (i = 0;i < ps->size;i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//�Ҳ���
}

//3.ɾ��ָ��������Ϣ
void DelContact(struct Contact* ps)
{
	char name[20];
	int pos = 0;
	printf("������Ҫɾ���˵����֣�");
	scanf("%s", name);
	//1.����
	pos = FindByName(ps, name);
	//2.ɾ��
	if (pos==-1)
	{
		printf("�Ҳ�������\n");
	}
	else
	{
		int j = 0;
		for (j = pos;j < ps->size - 1;j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
//4.���Һ�����Ϣ
void SearchContact(const struct Contact* ps)
{
	char name[20];
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);
	//1.����
	int i = FindByName(ps, name);
	if (i==-1)
	{
		printf("�Ҳ�������\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
	}
}
//5.�޸ĺ�����Ϣ
void ModifyContact(struct Contact* ps)
{
	char name[20];
	printf("������Ҫ�޸��˵����֣�");
	scanf("%s", name);
	//1.����
	int i = FindByName(ps, name);
	if (i == -1)
	{
		printf("�Ҳ�������\n");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", ps->data[i].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[i].age));
		printf("�������Ա�");
		scanf("%s", ps->data[i].sex);
		printf("������绰��");
		scanf("%s", ps->data[i].tele);
		printf("�������ַ��");
		scanf("%s", ps->data[i].addr);
		printf("�޸����\n");
	}
}
//6.��ӡ������Ϣ
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0;i < ps->size;i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
//�ͷ�
void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}