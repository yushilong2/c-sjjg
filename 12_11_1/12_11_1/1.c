//题目：快速找到未知长度单链表的中间节点

//普通方法
//首先遍历一遍单链表以确定单链表的长度L。
//然后再次从头节点出发循环L/2次找到单链表的中间节点
//算法复杂度：O(L+L/1)=O(3L/2)
//优化方法：快慢指针

Status GetNidNode(LinkList L, ElemType* e)
{
	LinkList search, mid;
	mid = search = L;
	while (search->next != NULL)
	{
		//search移动的速度是mid的2倍
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