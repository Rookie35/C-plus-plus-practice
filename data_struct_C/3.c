/*双向链表 
*/
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node
{
	ElemType data;
	struct node *next;
	struct node *prior;
}JD;

JD* initlist()
{
	JD* p;
	p=(JD*)malloc(sizeof(JD));//分配一个结点空间，p指向
	p->next=p;
	p->prior=p;
	return p; 
}

void insertlist(JD* L,int i,ElemType e)
{
	int j;
	JD *p,*q;
	j=1;
	p=L->next;//越过头结点
	while(p!=L&&j<i)//找到插入位置 
	{
		p=p->next;
		j++;
	 }
	 q=(JD*)malloc(sizeof(JD));
	 q->data=e;
	 q->next=p;
	 q->prior=p->prior;
	 
	 p->prior->next=q;
	 p->prior=q;
}

void inputdata(JD* L,int n)
{
	int i;
	ElemType e;
	for(i=0;i<n;i++){
		scanf("%d",&e);
		insertlist(L,1,e);
	}
}

void printlist(JD* phead)
{
	JD* p;
	int j=0;
	p=phead->next;
	printf("This list is:");
	while(p!=phead){
		printf("%d ",p->data);
		p=p->next;
		j++;
	}
	printf("\nThe length of list is:%d\n",j);
}

void dellist(JD* L,int i)
{
	JD *p;
	int j=1;
	p=L->next;
	while(p!=L&&j<i)//找到结点的位置 
	{
		p=p->next;
		j++;
	}
	p->prior->next=p->next;
	p->next->prior=p->prior;
	
	free(p);//释放删除结点的空间 
}

void main()
{
	JD *list1;
	list1=initlist();
	inputdata(list1,5);
	printlist(list1);
	insertlist(list1,4,456);
	printlist(list1);
	dellist(list1,3);
	printlist(list1);
}
