#include <stdio.h>

typedef struct dlistnode{
    int data;
    struct dlistnode* next;
    struct dlistnode* prev;
}DListNode;

typedef struct {
	DListNode* head;
}HeadNode;

HeadNode *createHead()
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL;
	return h;
}

DListNode* createNode(int data)
{
    DListNode* newNode = (DListNode*)malloc(sizeof(DListNode));
    if (newNode == NULL)
    {
        printf("error : �޸� �Ҵ� ����\n");
        exit(1);
    }
    else
    {
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }
}

void insertNode(HeadNode* phead, DListNode *preNode, DListNode* newNode)
{

    if (phead->head == NULL) //���� ����Ʈ�� ���, ó������ ������ ���� ����
    {
        phead->head = newNode;
        newNode->next = NULL;
    }
    else //���� ����Ʈ�� �ƴѰ��
    {
        if (preNode->next == NULL)// ������ ���
        {
            preNode->next = newNode; // ���� ��忡�� newNode�� ���� (����)
            newNode->prev = preNode;// newNode���� ���� ���� ���� (��������)
            newNode->next = NULL; // ������ ���
        }
        else
        {
            newNode->next = preNode->next;  // newNode���� �������� ���� (����)
            preNode->next = newNode; // ���� ��忡�� newNode�� ���� (����)
            newNode->prev = preNode;// newNode���� ���� ���� ���� (��������)
            newNode->next->prev = newNode; //���� ��忡�� newNode�� ����
        }
    }

}

void printNode(HeadNode* phead)
{
    if (phead->head == NULL) // ��尡 ���°��
    {
        printf("��尡 �����~!");
    }
    DListNode* curr = phead->head;
    int i = 1;
    while (curr != NULL)
    {
        printf("%d��° ��� �� : %d\n", i++, curr->data);
        curr = curr->next; // ���� ���� ����
    }
}

void allDelNode(HeadNode* phead)
{
    DListNode* curr = phead->head;

    while (curr != NULL)
    {
        curr->next->prev = phead->head;
        phead->head = curr->next;
        
        free(curr);
        
    }
    free(phead);
    curr = NULL;
    printf("��� �����Ǿ����ϴ�.\n");
}

DListNode* findNode(HeadNode* phead, int data)
{
    DListNode* s = phead->head;
    while (s->next != NULL)
    {
        if (s->data == data)
        {
            printf("��ġ�ϴ� ��尡 �����մϴ�.\n");
            return s;
        }
        else
        {
            s = s->next;
        }
    }
    printf("��ġ�ϴ� ���� �����ϴ�.\n")

}

int main()
{
    HeadNode* h = createHead();
    DListNode* preNode = createNode(3);
    insertNode(h, NULL, preNode);
    insertNode(h, preNode, createNode(6));
  
    printNode(h);

    allDelNode(h);

    return 0;
}