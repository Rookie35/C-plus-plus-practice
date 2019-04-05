
#include<stdio.h>
#include<stdlib.h>
#define MAX_LENGTH 50

typedef int ElemType;
typedef struct{
	ElemType *elem;
	int length;
	int listsize;
}SqList;

void main(){
	SqList *a,b;//创捷1个b结点 
	int i;
	a=&b;//a指向b 
	a->listsize=MAX_LENGTH;
	a->elem=(ElemType *)malloc(sizeof(ElemType)*a->listsize);//为顺序表分配大小为listsize的空间 
 	a->length=0;
	
	
	for(i=0;i<3;i++) 
	{
		scanf("%d ",a->elem[i]);
		a->length+=1;
	}
	
	printf("%d  %d  %d\n",a->elem[0],a->elem[1],a->elem[2]);
	free(a->elem);//释放数组空间 
}
