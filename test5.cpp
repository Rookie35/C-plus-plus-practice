/*��Ŀ������д��һ�����򣬽���һ��ʮ�����Ƶ���ֵ�ַ�������
 *������ֵ��ʮ�����ַ�����������ͬʱ���� �� 
 *��������������һ��ʮ�����Ƶ���ֵ�ַ��� 
 *��������� �������ֵ��ʮ�����ַ���
 *ʾ����
 *���룺0xA 
 *�����10
 *���ߣ�zheng kaifan 
 *ʱ�䣺2019/03/30
 */
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	string input;
	vector<string> str;
	
	while(cin>>input)
	{
		int sum=0;
		//str.push_back(input);
		int len=input.size();
		for(int i=len-1;i>=0;i--)
		{
			if(input[i]>='A'&&input[i]<='F')
				sum+=(10+input[i]-'A')*pow(16,len-i-1);
			else if(input[i]>='0'&&input[i]<='9')
				sum+=(input[i]-'0')*pow(16,len-i-1);
		}
		cout<<sum<<endl;
	}
	return 0;
 } 
