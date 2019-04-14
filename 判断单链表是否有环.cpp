/*
* @Author: ZKF
* @Date:   2019-04-09 17:46:43
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-09 18:17:42
*/

/**
 * 判断单链表是否有环
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

void Display(Node *head)
{
	if(head==NULL)
	{
		cout<<"the list is empty"<<endl;
		return;
	}
	else
	{
		Node *p=head;
		while(p)
		{
			cout<<p->data<<" ";
			p=p->next;
			if(p->data==head->data)
				break;
		}
	}
	cout<<endl;
}

bool IsExistLoop(Node* head)
{
	Node *slow=head,*fast=head;

	while(fast&&fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
			break;
	}
	return !(fast==NULL||fast->next==NULL);
}

int GetLoopLength(Node* head)
{
	Node *slow=head,*fast=head;

	while(fast&&fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
			break;
	}
	slow=slow->next;
	fast=fast->next->next;
	int length=1;
	while(fast!=slow)
	{
		slow=slow->next;
		fast=fast->next->next;
		length++;
	}
	return length;
}

Node* Init(int num)
{
	if(num<=0)
		return NULL;
	Node* cur=NULL;
	Node* head=NULL;
	Node* node=(Node*)malloc(sizeof(Node));
	node->data=1;
	head=cur=node;
	for(int i=1;i<num;i++)
	{
		Node* node=(Node*)malloc(sizeof(Node));
		node->data=i+1;
		cur->next=node;
		cur=node;
	}
	cur->next=head;
	return head;
}

int main()
{
	Node* list=NULL;
	list=Init(10);
	Display(list);

	if(IsExistLoop(list))
	{
		cout<<"this list has loop"<<endl;
		int length=GetLoopLength(list);
		cout<<"loop length:"<<length<<endl;
	}
	else
	{
		cout<<"this list do not has loop"<<endl;
	}
	return 0;
}