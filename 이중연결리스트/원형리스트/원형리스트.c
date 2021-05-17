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
		printf("메모리 할당 실패!!");
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

/* 전체 노드 출력 */
void printNode(HeadNode* h)
{	
	int i = 1;
	ListNode* curr = h->head;
	do {
		printf("%d번째 노드 값 : %d\n", i++, curr->data);
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
	HeadNode* h = createHead();				// 출력 순서
	insertFirstNode(h, createNode(h,6));    // 2    
	insertLastNode(h, createNode(h, 9));   //  3   
	insertLastNode(h, createNode(h, 12)); //   4  
	insertLastNode(h, createNode(h, 3)); //    1 

	printNode(h);

	return 0;
}