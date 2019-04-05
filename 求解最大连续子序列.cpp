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

void maxSubSum()//时间复杂度O(n) 
{
	dp[0]=0;
	for(int j=1;j<=n;j++)
		dp[j]=max(dp[j-1]+a[j],a[j]); 
} 

void dispmaxSum()
{
	int maxj=1;
	for(int j=2;j<=n;j++)//求dp中最大元素dp[maxj] 
		if(dp[j]>dp[maxj]) maxj=j;
	
	int k;	
	for(k=maxj;k>=1;k--)
		if(dp[k]<=0) break;
	printf("	最大连续子序列和:%d\n",dp[maxj]);
	printf("	所选子序列:");
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
