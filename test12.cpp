/*��Ŀ�����������ݱ��¼��������������ֵ����Ա�������ͬ�ļ�¼���кϲ���
 *������ͬ��������ֵ����������㣬�������keyֵ������������ 
 *�����������������ֵ�Եĸ���
 *Ȼ������ɶԵ�index��valueֵ���Կո���� 
 *�������������ϲ���ļ�ֵ�ԣ����У� 
 *ʾ��1�� 
 *����
 *4 
 *0 1 
 *0 2 
 *1 2 
 *3 4
 *���
 *0 3 
 *1 2 
 *3 4 
 */
#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	map< int,vector<int> > table;
	
	int a,b;
	int i=0;
	while(cin>>a>>b)
	{
		table[a].push_back(b);
	}
	for(map< int,vector<int> >::const_iterator it=table.begin();
	it!=table.end();++it){
		int sum=0;
		for(vector<int>::const_iterator i=it->second.begin();i!=it->second.end();i++)
		{
			sum+=*i;
		}
		cout<<it->first<<" "<<sum<<endl;
	}
	return 0;
}
