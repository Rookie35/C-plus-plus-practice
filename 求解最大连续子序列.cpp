#include<cstdio>

#define MAXN 20

int n=6;
int a[]={0,-2,11,-4,13,-5,-2};

int dp[MAXN];

int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}

void maxSubSum()//ʱ�临�Ӷ�O(n) 
{
	dp[0]=0;
	for(int j=1;j<=n;j++)
		dp[j]=max(dp[j-1]+a[j],a[j]); 
} 

void dispmaxSum()
{
	int maxj=1;
	for(int j=2;j<=n;j++)//��dp�����Ԫ��dp[maxj] 
		if(dp[j]>dp[maxj]) maxj=j;
	
	int k;	
	for(k=maxj;k>=1;k--)
		if(dp[k]<=0) break;
	printf("	������������к�:%d\n",dp[maxj]);
	printf("	��ѡ������:");
	for(int i=k+1;i<=maxj;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main()
{
	maxSubSum();
	dispmaxSum();
	
	return 0;
}
