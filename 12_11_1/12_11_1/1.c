//��Ŀ�������ҵ�δ֪���ȵ�������м�ڵ�

//��ͨ����
//���ȱ���һ�鵥������ȷ��������ĳ���L��
//Ȼ���ٴδ�ͷ�ڵ����ѭ��L/2���ҵ���������м�ڵ�
//�㷨���Ӷȣ�O(L+L/1)=O(3L/2)
//�Ż�����������ָ��

Status GetNidNode(LinkList L, ElemType* e)
{
	LinkList search, mid;
	mid = search = L;
	while (search->next != NULL)
	{
		//search�ƶ����ٶ���mid��2��
		if (search->next->next != NULL)
		{
			search = search->next->next;
			mid = mid->next;
		}
		else
		{
			search = search->next;
		}
	}
	*e = mid->data;
	return 1;
}