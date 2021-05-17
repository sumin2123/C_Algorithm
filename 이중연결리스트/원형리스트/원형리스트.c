#include <stdio.h> 

typedef struct listnode {
	int data;
	struct listnode* link;

}ListNode;

typedef struct {
	ListNode* head;
}HeadNode;

HeadNode* createHead()
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL;
	return h;
}

ListNode* createNode(HeadNode* phead, int data)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL)
	{
		printf("�޸� �Ҵ� ����!!");
		return NULL;
	}
	else
	{
		newNode->data = data;
		newNode->link = NULL;
		return newNode;
	}
}

void insertFirstNode(HeadNode* phead, ListNode* newNode)
{
	if (phead->head == NULL)
	{
		phead->head = newNode;
		newNode->link = newNode;

	}
	else
	{
		newNode->link = phead->head->link;
		phead->head->link = newNode;
	}
}

/* ��ü ��� ��� */
void printNode(HeadNode* h)
{	
	int i = 1;
	ListNode* curr = h->head;
	do {
		printf("%d��° ��� �� : %d\n", i++, curr->data);
		curr = curr->link;
	} while (curr != h->head);
}

void insertLastNode(HeadNode* phead, ListNode* newNode)
{
	if (phead->head == NULL)
	{
		phead->head = newNode;
		newNode->link = newNode;
	}
	else
	{
		newNode->link = phead->head->link;
		phead->head->link = newNode;
		phead->head = newNode;
	}

}

int main()
{
	HeadNode* h = createHead();				// ��� ����
	insertFirstNode(h, createNode(h,6));    // 2    
	insertLastNode(h, createNode(h, 9));   //  3   
	insertLastNode(h, createNode(h, 12)); //   4  
	insertLastNode(h, createNode(h, 3)); //    1 

	printNode(h);

	return 0;
}