#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	//cin>>n;
	string str;

	cin>>str;
	
	string::iterator it;
	
	for(it=str.begin();it!=str.end();it++)
	{
		if(*it=='1'&&*(it+1)=='0')
			str.erase(it,it+1);
		else if(*it=='0'&&*(it+1)=='1')
			str.erase(it,it+1);
		it=str.begin();
	}
	
	cout<<str.size()<<endl;
	
	return 0;
 } 
