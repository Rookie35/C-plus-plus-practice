/*
 */
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int input;
	cin>>input;
	
	string output;
	int i=0;
	while(input!=0)
	{
		int a='0'+input%10;
		output.push_back(a);
		input=input/10;
		i++;
	}
	
	cout<<output;
	
	return 0;
}
