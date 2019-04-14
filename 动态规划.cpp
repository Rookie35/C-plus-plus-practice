#include<iostream>
#define MAX 1000
using namespace std;

int count=1;

//存在大量重复计算 ,自顶向下 
int Fib(int n)
{
	printf("(%d)求解Fib(%d)\n",count++,n);
	if(n==1 || n==2){
		printf("  计算出Fib(%d)=%d\n",n,1);
		return 1; 
	}
	else{
		int x=Fib(n-1);
		int y=Fib(n-2);
		printf("  计算出Fib(%d)=Fib(%d)+Fib(%d)=%d\n",n,n-1,n-2,x+y);
		return x+y; 
	}
}

//设计dp[]动态规划数组,自底向上 
int dp[MAX];
int Fib1(int n)
{
	dp[1]=dp[2]=1;
	printf("(%d)计算出Fib(1)=1\n",count++);
	printf("(%d)计算出Fib(2)=1\n",count++);
	//建表 
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];//查表得到 
		printf("(%d)计算出Fib(%d)=%d\n",count++,i,dp[i]);
	}
	return dp[n];//原问题的解 
} 
 

int main()
{
	int n;
	scanf("%d",&n);
//	Fib(n);
	Fib1(n);
	return 0;
}
