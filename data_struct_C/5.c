#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct node
{
	ElemType data;
	struct node *next;
}JD;

void createlist(JD** rear,int n)
{
	int i;
	JD *p,*phead;
	phead=NULL;
	for(i=0;i<n;i++)
	{
		p=(JD*)malloc(sizeof(JD));
		scanf("%d",&(p->data));
		if(i==0)
			*rear=p;
		p->next=phead;//尾结点指向头结点 
		phead=p;
	}
	p=(JD*)malloc(sizeof(JD));//头结点 
	p->next=phead;
	phead=p;
	(*rear)->next=phead;	
}

void printlist(JD* rear)
{
	JD* p;
	int j=0;
	p=rear->next->next;
	printf("This list is:");
	while(p!=rear->next){
		printf("%d  ",p->data);
		p=p->next;
		j++;
	}
	printf("\nThe length of list is:%d\n",j);
 } 

JD* mergelist(JD* ra,JD* rb)
{
	JD *r;
	r=ra->next;
	ra->next=rb->next->next;
	free(rb->next);
	rb->next=r;
	return rb; 
}

void main()
{
	JD *list1,*list2,*list3;
	createlist(&list1,5);
	printlist(list1);
	
	createlist(&list2,3);
	list3=mergelist(list1,list2);
	printlist(list3);
}


