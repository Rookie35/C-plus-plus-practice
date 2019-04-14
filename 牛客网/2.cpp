/*
* @Author: ZKF
* @Date:   2019-04-10 15:38:08
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-10 15:46:01
*/

/**
 *将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符
 * 输入：
 *I am a boy
 * 输出：
 *boy a am I
 * 
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string str1;
	vector<string> words;
	while(cin>>str1)
	{
		words.push_back(str1);
	}

	vector<string>::iterator it;
	for(it=words.end()-1;it>=words.begin();it--)
	{
		cout<<*it<<" ";
	}
	return 0;
}