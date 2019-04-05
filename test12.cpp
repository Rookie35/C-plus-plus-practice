/*题目描述：输数据表记录包含表索引和数值，请对表索引相同的记录进行合并，
 *即将相同索引的数值进行求和运算，输出按照key值升序进行输出。 
 *输入描述：先输入键值对的个数
 *然后输入成对的index和value值，以空格隔开 
 *输出描述：输出合并后的键值对（多行） 
 *示例1： 
 *输入
 *4 
 *0 1 
 *0 2 
 *1 2 
 *3 4
 *输出
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
