/*
 *从标准输入中一次读入一整行 
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string line;
	while(getline(cin,line))
		cout<<line<<endl;
	return 0;
}


 
/*
 *从标准输入中一次读入一个词 
*/ 
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word;
	while(cin>>word)
		cout<<word<<endl;
	return 0;
 }
 */ 
