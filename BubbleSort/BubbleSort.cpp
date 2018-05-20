#include "Array.h"
#include "List.h"

void BubbleSort(int *a,int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=n-1;j>i;j--)
			if(a[j]<a[j-1])
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
}
void BubbleSort2(int *a, int n)
{
	for (int i = 0; i < n - 1; )
	{
		int vt = n - 1;
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
				vt = j;
			}
		}
		i = vt;
	}
}

void BubbleSort(LIST &l)
{
	for(NODE *p=l.pHead;p->pNext;p=p->pNext)
		for(NODE *q=l.pTail;q!=p;q=q->pPrev)
			if(q->info < q->pPrev->info)
			{
				int temp=q->info;
				q->info=q->pPrev->info;
				q->pPrev->info=temp;
			}
}