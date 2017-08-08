#define ElemType int
#include<stdio.h>
typedef struct LNode{
	ElemType data;
	ElemType code;
	struct LNode*next;
}LNode,*LinkList;
void InitList_LL(LinkList &L)
{
	L=NULL;
}
int ListLength_LL(LinkList L)
{
	if(L==NULL)return 0;
	LinkList p;
	int k;
	p=L;k=1;
	while(p->next!=L){
		k++;p=p->next;
	}
	return k;
}
void PrintList_L(LNode*L)
{
	LNode*p;
	p=L;
	do{printf("%d	",p->data);p=p->next;
	}while(p!=L);
}
LNode*LocateItem_LL(LinkList L,ElemType e)
{
	//ǰ����e������������ 
	LinkList p;
	p=L;
	while(p->next!=L&&p->data!=e)p=p->next;
	return p;
}
void ListInsert_LL(LinkList &L,LinkList p,LNode*s)
{
	LNode *q;
	q=L;
	while(q->next!=L&&q->next!=p)q=q->next;
	if(q->next=p)
	if(q->next=L)
	{L=s;q->next=s;s->next=p;}
	else 
	{q->next=s;s->next=p;}
	else printf("p����L�еĽ��\n");
}
void ListDelete_LL(LinkList &L,LNode*p,ElemType &e)
{
	LNode*q;
	q=L;
	while(q->next!=L&&q->next!=p)q=q->next;
	if(q->next!=p)
	printf("p����L�еĽ��\n");
	else if (q->next==L)
	{e=p->data;L=L->next;q->next=L;delete p;}
	else 
	{q->next=p->next;e=p->data;delete p;}
}
