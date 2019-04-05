/*建立3个结点的链表 
*/
#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct node
{
	ElemType data;
	struct node *next;
 }JD;

void main()
{
	int j;
	JD *p,*phead,*ptail;
	
	p=(JD*)malloc(sizeof(JD));
	scanf("%d",&(p->data));
	ptail=p;
	phead=p;
	
	p=(JD*)malloc(sizeof(JD));
	scanf("%d",&(p->data));
	ptail->next=p;
	ptail=p;
	
	p=(JD*)malloc(sizeof(JD));
	scanf("%d",&(p->data));
	ptail->next=p;
	p->next=NULL;
	
	p=phead;
	j=0;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
		j++;
	}
	printf("\nThe length of list is:%d\n",j);
}
