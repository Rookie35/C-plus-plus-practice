/*
* @Author: ZKF
* @Date:   2019-04-10 15:44:33
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-10 15:52:14
*/

/**
 * 给定n个字符串，请对n个字符串按照字典序排列。、
 * 输入：
 * 9
 *cap
 *to
 *cat
 *card
 *two
 *too
 *up
 *boat
 *boot
 *
 *输出
 *boat
 *boot
 *cap
 *card
 *cat
 *to
 *too
 *two
 *up 
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;

	string str;
	vector<string> str1;
	while(n--)
	{
		cin>>str;
		str1.push_back(str);
	}

	sort(str1.begin(),str1.end());
	for(int i=0;i<str1.size();i++)
	{
		cout<<str1[i]<<endl;
	}
	return 0;
}