/*��Ŀ��������дһ�������������ַ����к��еĲ�ͬ�ַ��ĸ�����
 *�ַ���ACSII�뷶Χ��(0~127)�����ڷ�Χ�ڵĲ���ͳ�ơ� 
 *��������������N���ַ����ַ���ACSII�뷶Χ�ڡ� 
 *��������������Χ��(0~127)�ַ��ĸ����� 
 *ʾ��1 
 *���룺
 *abc 
 *�����
 *3 
 *���ߣ�zheng kaifan
 *ʱ�䣺2019/04/03 
 */
#include<iostream>
#include<string>
#include<set>

using namespace std;

int main()
{
	string input;
	cin>>input;
	
	set<char> si;
	int count=0;
	for(string::iterator it=input.begin();it!=input.end();it++)
	{
		if(*it>=0&&*it<=127&&si.count(*it)==0)
		{
			count++;
			si.insert(*it);
		}
	}

	cout<<count;
	return 0;
}
