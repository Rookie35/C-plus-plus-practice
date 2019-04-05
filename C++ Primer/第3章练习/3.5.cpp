/*
 *
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	string sumstr;
	while(getline(cin,str))
	{
		sumstr+=str;
		cout<<sumstr<<endl;
	}
	return 0;
}
*/



#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	string sumstr;
	while(getline(cin,str))
	{
		sumstr=sumstr+str+" ";
		cout<<sumstr<<endl;
	}
	return 0;
}
