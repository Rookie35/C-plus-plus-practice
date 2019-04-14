/*
* @Author: ZKF
* @School: JNU
* @Date:   2019-04-07 13:14:31
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-07 15:22:31
*/


/**
 * 
 */

#include<stdio.h>
#include<stdlib.h>

#define MAX_LENGTH 50;

typedef char ElemType;

typedef struct 
{
	ElemType *base;
	ElemType *top;
	int stacksize;
}STACK;

void initstack(STACK *a)
{
	a->stacksize=MAX_LENGTH;
	a->base=(ElemType *)malloc(sizeof(ElemType)*a=>stacksize);
	a->top=a->base;
}

void push(STACK *a,ElemType e)
{
	if(a->top-a->base==a->stacksize){
		a->base=(ElemType*)realloc(a->base,sizeof(ElemType)*a->stacksize*2);
		a->top=a->base+a->stacksize;
		a->stacksize*2;
	}
	*a->top++=e;
}

void pop(STACK *a,ElemType *e)
{
	if(a->base==a->top){
		printf("The stack is NULL!\n");
		return;
	}
	*e=*--a->top;
}

int stackempty(STACK *a)
{
	if(a->top==a->base) return 1;
	else return 0;
}

int stackcurrentsize(STACK *a)
{
	return a->top-a->base;
}

void copytodatazone(STACK *a,ElemType datazone[20][81],int totalline)
{
	int i;
	i=stackcurrentsize[a];
	datazone[totalline][i]="\0";
	while(!stackempty(a)) pop(a,datazone[totalline]+--i);
}