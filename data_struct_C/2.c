
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
	SqList *a,b;//����1��b��� 
	int i;
	a=&b;//aָ��b 
	a->listsize=MAX_LENGTH;
	a->elem=(ElemType *)malloc(sizeof(ElemType)*a->listsize);//Ϊ˳�������СΪlistsize�Ŀռ� 
 	a->length=0;
	
	
	for(i=0;i<3;i++) 
	{
		scanf("%d ",a->elem[i]);
		a->length+=1;
	}
	
	printf("%d  %d  %d\n",a->elem[0],a->elem[1],a->elem[2]);
	free(a->elem);//�ͷ�����ռ� 
}
