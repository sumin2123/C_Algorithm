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
        printf("error : 메모리 할당 실패\n");
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

    if (phead->head == NULL) //공백 리스트인 경우, 처음이자 마지막 노드로 삽입
    {
        phead->head = newNode;
        newNode->next = NULL;
    }
    else //공백 리스트가 아닌경우
    {
        if (preNode->next == NULL)// 마지막 노드
        {
            preNode->next = newNode; // 이전 노드에서 newNode랑 연결 (우측)
            newNode->prev = preNode;// newNode에서 이전 노드랑 연결 (좌측으로)
            newNode->next = NULL; // 마지막 노드
        }
        else
        {
            newNode->next = preNode->next;  // newNode에서 다음노드랑 연결 (우측)
            preNode->next = newNode; // 이전 노드에서 newNode랑 연결 (우측)
            newNode->prev = preNode;// newNode에서 이전 노드랑 연결 (좌측으로)
            newNode->next->prev = newNode; //다음 노드에서 newNode랑 연결
        }
    }

}

void printNode(HeadNode* phead)
{
    if (phead->head == NULL) // 노드가 없는경우
    {
        printf("노드가 없어요~!");
    }
    DListNode* curr = phead->head;
    int i = 1;
    while (curr != NULL)
    {
        printf("%d번째 노드 값 : %d\n", i++, curr->data);
        curr = curr->next; // 다음 노드로 진행
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
    printf("모두 삭제되었습니다.\n");
}

DListNode* findNode(HeadNode* phead, int data)
{
    DListNode* s = phead->head;
    while (s->next != NULL)
    {
        if (s->data == data)
        {
            printf("일치하는 노드가 존재합니다.\n");
            return s;
        }
        else
        {
            s = s->next;
        }
    }
    printf("일치하는 값이 없습니다.\n")

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