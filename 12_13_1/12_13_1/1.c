//ѭ������

/*����洢�ṹ�Ķ���*/
typedef struct CLinList
{
	int data;
	struct ClinList* next;
}node;

/*��ʼ��ѭ������*/
void ds_init(node** pNode)
{
	int item;
	node* temp;
	node* target;
	
	printf("����ڵ��ֵ������0��ɳ�ʼ��\n");

	while (1)
	{
		scanf("%d", &item);
		fflush(stdin);

		if (item == 0)
			return;
		if ((*pNode) == NULL)
		{//ѭ��������ֻ��һ�����
			*pNode = (node*)malloc(sizeof(struct CLinkList));
			if (!(*pNode))
				exit(0);
			(*pNode)->data = item;
			(*pNode)->next = *pNode;
		}
		else 
		{//�ҵ�nextָ���һ�����Ľ��
			for (target = (*pNode); target->next != (*pNode); target = target->next)
				;
			//����һ���µĽ��
			temp = (node*)malloc(sizeof(struct CLinkList));
			
			if (!temp)
				exit(0);
			temp->data = item;
			temp->next = *pNode;
			target->next = temp;
		}
	}
}

//���벿��
void ds_insert(node** pNode, int i)
{
	node* temp;
	node* target;
	node* p;
	int item;
	int j = 1;

	printf("����Ҫ�������ֵ��");
	scanf("%d", &item);

	if (i == 1)
	{//�²���Ľ����Ϊ��һ�����
		temp = (node*)malloc(sizeof(struct CLinkList));
		
		if (!temp)
			exit(0);

		temp->data = item;

		//Ѱ�ҵ����һ�����
		for (target = (*pNode); target->next != (*pNode); target = target->next)
			;

		temp->next = (*pNode);
		target->next = temp;
		*pNode = temp;
	}
	else
	{
		target = *pNode;

		for (; j < (i - 1); ++j)
		{
			target = target->next;
		}

		temp = (node*)malloc(sizeof(struct CLinkList));

		if (!temp)
			exit(0);

		temp->data = item;
		p = target->next;
		target->next = temp;
		temp->next = p;
	}
}