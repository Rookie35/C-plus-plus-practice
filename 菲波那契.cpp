#include<iostream>
#define MAX 1000
using namespace std;

int count=1;

//���ڴ����ظ����� ,�Զ����� 
int Fib(int n)
{
	printf("(%d)���Fib(%d)\n",count++,n);
	if(n==1 || n==2){
		printf("  �����Fib(%d)=%d\n",n,1);
		return 1; 
	}
	else{
		int x=Fib(n-1);
		int y=Fib(n-2);
		printf("  �����Fib(%d)=Fib(%d)+Fib(%d)=%d\n",n,n-1,n-2,x+y);
		return x+y; 
	}
} 

//���dp[]��̬�滮����,�Ե����� 
int dp[MAX];
int Fib1(int n)
{
	dp[1]=dp[2]=1;
	printf("(%d)�����Fib(1)=1\n",count++);
	printf("(%d)�����Fib(2)=1\n",count++);
	//���� 
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];//���õ� 
		printf("(%d)�����Fib(%d)=%d\n",count++,i,dp[i]);
	}
	return dp[n];//ԭ����Ľ� 
} 
 
void Fibonacci()
{
	int n;
	scanf("%d",&n);
	//���Ʋ������� 
	Fib(n);
	Fib1(n);
}


int main()
{
	
	Fibonacci();
	
	return 0;
}
