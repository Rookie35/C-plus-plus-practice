/*
* @Author: ZKF
* @Date:   2019-04-10 15:52:57
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-10 16:57:51
*/

/**
 *输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。
 *
 *输入：
 *5
 *输出：
 * 2
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin>>n;


	vector<int> arr; 
	
	while(n!=0)
	{
		arr.push_back(n%2);
		n/=2;
		
	}
	int count=0;
	for(int i=arr.size();i>=0;i--)
	{
		if(arr[i]==1)
			count++;
	}
	cout<<count;


	return 0;
}