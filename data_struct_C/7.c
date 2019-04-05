#include<stdio.h>
#include<stdlib.h>
#define MAX_LENGTH 50

typedef int ElemType;

typedef struct{
	ElemType *elem;
	int length;
	int listsize;
}SqList;

void initlist(SqList *a)
{
	a->listsize=MAX_LENGTH;
	a->elem=(ElemType *)malloc(sizeof(ElemType)*a->listsize);
}
