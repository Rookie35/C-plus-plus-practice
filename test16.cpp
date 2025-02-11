/*题目描述：小Q定义了一种数列称为翻转数列:
 *给定整数n和m, 满足n能被2m整除。对于一串连续递增整数数列1, 2, 3, 4..., 
 *每隔m个符号翻转一次, 最初符号为'-';。
 *例如n = 8, m = 2, 数列就是: -1, -2, +3, +4, -5, -6, +7, +8.
 *而n = 4, m = 1, 数列就是: -1, +2, -3, + 4.
 *小Q现在希望你能帮他算算前n项和为多少。?
 *输入描述：输入包括两个整数n和m(2 <= n <= 109, 1 <= m), 并且满足n能被2m整除。
 *输出描述：输出一个整数, 表示前n项和。
 *输入例子1：8 2 
 *输出例子1：8
 *作者：zheng kaifan
 *时间：2019/04/03  
 */
#include<iostream>
#include<vector> 
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	vector<int> arr;
	
	for(int i=1;i<=n;i++)
	{
		int a=0-i;
		arr.push_back(a);
	}
		
	for(int i=0;i<n;i+=2*m)
	{
		if(i%m==0)
		{
			arr[i+m]=0-arr[i+m];
			arr[i+m+1]=0-arr[i+m+1];
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	cout<<sum;
	
	return 0;
}
