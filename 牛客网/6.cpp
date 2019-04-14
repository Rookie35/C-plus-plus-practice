/*
* @Author: ZKF
* @Date:   2019-04-11 18:40:59
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-14 15:41:07
*/
/**
 * 
 */

#include <iostream>
using namespace std;

typedef struct
{
	int value;
	int weight;
	int judge;
}list;

int main()
{
	int money,total;
	cin>>money>>total;

	list goods[61];
	int dp[61][3200];

	memset(dp,0,sizeof(dp));

	for(int i=1;i<=total;i++)
	{
		cin>>goods[i].value>>goods[i].weight>>goods[i].judge;
	}


	//动态规划
	for(int j=1;j<=money;j++)
	{
		for(int i=1;i<=total;i++)
		{
			if(!goods[i].judge)//该物品为主件
			{
				if(goods[i].value<=j)
					dp[i][j]=dp[i-1][j]>(dp[i-1][j-goods[i].value]+goods[i].value*goods[i].weight)?dp[i-1][j]:(dp[i-1][j-goods[i]])
			}
		}
	}
}