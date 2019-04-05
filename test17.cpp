/*题目描述：
 *输入描述： 
 *输出描述：
 *示例1： 
 *输入：
 *4
 *3 4 1 2
 *输出：
 *24
 *作者：zheng kaifan
 *时间：2019/04/03 
 */ 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr;
	int n;
	cin >> n;
	int a;
	while(cin>>a)
		arr.push_back(a);
	
	int max[3]={0},min[2]={0};
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]>0)
		{
			if(arr[i]>max[0])
			{
				max[2]=max[1];
				max[1]=max[0];
				max[0]=arr[i];
			}
			else if(arr[i]>max[1])
			{
				max[2]=max[1];
				max[1]=arr[i];
			}
			else if(arr[i]>max[2])
				max[2]=arr[i];
		}
		else
		{
			if(arr[i]<min[0])
			{
				min[1]=min[0];
				min[0]=arr[i];
			}
			else if(arr[i]<min[1])
				min[1]=arr[i];
		}
	}
	
	long temp=max[0]*max[1];
	long max1=temp*max[2];
	
	temp=min[0]*min[1];
	long max2=temp*max[0];
	
	long Max;
	
	if(max1>max2)
		Max=max1;
	else Max=max2;
	
	cout << Max;
	
	return 0;
}
