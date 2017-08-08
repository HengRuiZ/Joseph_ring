#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include"LinkListL.h"
using namespace std;
main()
{
	LNode*L,*p,*q;
	int i,j,k,n,e;
	cout<<"请输入人数"<<endl;
	cin>>n;
	if(n>0)
	{
		i=0;
		L=(LNode*)malloc(sizeof(LNode));
		L->data=i+1;
		L->next=L;
		q=L;
		cout<<"从第一个开始，请输入密码"<<endl;
		cin>>L->code; 
		for(i=1;i<n;i++)
		{
			p=(LNode*)malloc(sizeof(LNode));
			p->data=i+1;
			cout<<"请输入密码"<<endl;
			cin>>p->code;
			q->next=p;
			p->next=L;
			q=q->next;
		}
	}
	PrintList_L(L);
	printf("\n");
	p=L;
	for(k=20,i=2;k>0&&i<n;i++)
		{
			for(j=2;j<k;j++){p=p->next;}
			q=p->next;
			p->next=p->next->next;
			p=p->next;
			printf("%d	",q->data);
			k=q->code;
			free(q);
		}
		if(k%2)
		printf("%d	%d",p->data,p->next->data);
		else
		printf("%d	%d",p->next->data,p->data);
}
