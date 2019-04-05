#include<cstdio>

#define MAXN 500

int dp[MAXN][MAXN];

//自底向上 
void Split(int n,int k)
{
	for(int i=1;i<=n;i++)
		for(int j=1;j<=k;j++)
		{
			if(i==1||j==1)
				dp[i][j]=1;
			else if(i<j)
				dp[i][j]=dp[i][i];
			else if(i==j)
				dp[i][j]=dp[i][j-1]+1;
			else
				dp[i][j]=dp[i][j-1]+dp[i-j][j];
		}
}

//自顶向下（备忘录方法） 
int dpf(int n,int k)
{
	if(dp[n][k]!=0)
		return dp[n][k];
	if(n==1||k==1){
		dp[n][k]=1;
		return dp[n][k];
	}
	else if(n<k)
	{
		dp[n][k]=dpf(n,n);
		return dp[n][k];
	}
	else if(n==k)
	{
		dp[n][k]=dpf(n,k-1)+1;
		return dp[n][k];
	}
	else
	{
		dp[n][k]=dpf(n,k-1)+dpf(n-k,k);
		return dp[n][k];
	}
}

int main()
{
	int n=400,k=400;
	Split(n,k);
	printf("(%d,%d)=%d\n",n,k,dp[n][k]);
	return 0;
}
