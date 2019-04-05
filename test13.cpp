#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
	int input;
	cin>>input;
	
	vector<int> arr;
	
	while(input!=0)
	{
		int a=input%10;
		arr.push_back(a);
		input=input/10;
	}
	set<int> si;
	//vector<int>::iterator end_unique=unique(arr.begin(),arr.end());
	for(vector<int>::iterator it=arr.begin();it!=arr.end();it++){
		//cout<<*it;
		if(si.count(*it)==0)
		{
			si.insert(*it);
			++it;
		}
		else 
			arr.erase(it);
	} 
	for(int i=0;i<arr.size();i++)
		cout<<arr[i];
	
	return 0;
 } 
