//����A��BΪ�ǿ�ѭ�������βָ��
linkList Connect(LinkList A, LinkList B)
{
	LinkList p = A->next;//����A���ͷ���λ��
	A->next = B->next->next;//B��Ŀ�ʼ������ӵ�A��β
	free(B->next);//�ͷ�B���ͷ���
	B->next = p;
	return B;//������ѭ�������βָ��
}

//�жϵ������Ƿ��л�
