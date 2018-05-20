#ifndef DANH_SACH
#define DANH_SACH

struct NODE
{
	int info;
	NODE *pNext;
	NODE *pPrev;
};
struct LIST
{
	NODE *pHead;
	NODE *pTail;
};
void Init(LIST&);
int IsEmpty(LIST);
NODE *GetNode(int);
void AddHead(LIST&,NODE*);
void Input(LIST&);
void Output(LIST);
void BubbleSort(LIST&);

#endif