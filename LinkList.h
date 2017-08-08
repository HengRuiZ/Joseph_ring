#define ElemType int
#include<stdio.h>
typedef struct LNode{
	ElemType data;
	struct LNode*next;
}LNode,*LinkList;
void InitList_L(LinkList &L)
{
	L=NULL;
}
int ListLength_L(LinkList L)
{
	LinkList p;
	int k;
	p=L;k=0;
	while(p){
		k++;p=p->next;
	}
	return k;
}
LNode*LocateItem_L(LinkList L,ElemType e)
{
	LinkList p;
	p=L;
	while(p&&p->data!=e)p=p->next;
	return p;
}
void ListInsert_L(LinkList &L,LNode*p,LNode*s)
{
	LNode *q;
	if(p==L)
	{
		s->next=L;
		L=s;
	}
	else{
		q=L;
		while(q&&q->next!=p)q=q->next;
		if(q){q->next=s;s->next=p;}
		else printf("p不是L中的结点");
	}
}
void ListDelete_L(LinkList &L,LNode*p,ElemType &e)
{
	LNode*q;
	if(p==L)L=p->next;
	else{
		q=L;
		while(q&&q->next!=p)q=q->next;
	if(q)q->next=p->next;
	else printf("p不是L中的结点");}
	e=p->data;delete p;
}
